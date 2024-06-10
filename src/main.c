/*
** EPITECH PROJECT, 2024
** main.c
** File description:
** main
*/

#include "../include/my.h"
#include "../include/file_navy.h"

int display_info(int argc, char **argv)
{
    if (argc == 2 && my_strcmp(argv[1], "-h") == 0) {
        flag_h();
        return 0;
    }
    if (argc == 1 || argc > 3) {
        my_printf("Usage: ");
        my_printf("./my_navy <Player 1 PID> <pos2> or ./my_navy <pos1>\n");
        return 84;
    }
}

int main(int argc, char **argv)
{
    int pid_player;

    display_info(argc, argv);
    if (argc == 2 && my_strcmp(argv[1], "pos1") == 0) {
        return player1();
        generate_map();
    }
    if (argc == 3 && my_strcmp(argv[2], "pos2") == 0) {
        pid_player = str_into_int(argv[1]);
        if (pid_player <= 0) {
            my_printf("Invalid PID\n");
            return 84;
        }
        player2(pid_player);
        generate_map();
    }
    return 0;
}
