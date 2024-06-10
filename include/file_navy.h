/*
** EPITECH PROJECT, 2024
** navy.h
** File description:
** file_navy
*/

#ifndef FILE_NAVY_H_
    #define FILE_NAVY_H_
typedef struct status_s {
    int connected;
} status_t;
    #include <stdio.h>
    #include <stdlib.h>
    #include <signal.h>
    #include <string.h>
    #include <unistd.h>

void flag_h(void);
void handle_connection(int sig);
void update_connection_status(int sig);
int player1(void);
void player2(int pid_player1);
void generate_map(void);

#endif /* !FILE_NAVY_H_ */
