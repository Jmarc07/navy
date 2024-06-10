/*
** EPITECH PROJECT, 2024
** Epitech Tech 1
** File description:
** Navy : Singal connection
*/

#include "../include/file_navy.h"

status_t status = {0};

void handle_connection(int sig)
{
    if (sig == SIGUSR1) {
        my_printf("enemy connected\n");
        kill(getpid(), SIGUSR2);
    }
}

void handle_confirmation_connx(int sig)
{
    if (sig == SIGUSR2) {
        status.connected = 1;
    }
}

int player1(void)
{
    int id = getpid();
    struct sigaction sa_ply1;

    sa_ply1.sa_handler = handle_connection;
    sa_ply1.sa_flags = 0;
    sigaction(SIGUSR1, &sa_ply1, NULL);
    my_printf("my_pid: %d\n", id);
    my_printf("waiting for enemy...\n");
    pause();
    boat_p1();
    return id;
}

void player2(int pid_player1)
{
    struct sigaction sa_ply2;

    my_printf("Player 2 started, verifying Player 1 PID: %d\n", pid_player1);
    if (kill(pid_player1, 0) == -1) {
        return (84);
    }
    sa_ply2.sa_handler = handle_confirmation_connx;
    sa_ply2.sa_flags = 0;
    sigaction(SIGUSR2, &sa_ply2, NULL);
    my_printf("my_pid: %d\n", getpid());
    my_printf("Connecting to Player 1 (pid: %d)...\n", pid_player1);
    kill(pid_player1, SIGUSR1);
    while (status.connected == 0) {
        pause();
    }
    if (status.connected == 1) {
        my_printf("Successfully connected to Player 1.\n");
    }
    boat_p2();
}
