/*
** EPITECH PROJECT, 2024
** player2
** File description:
** player_2
*/
#include "../include/file_navy.h"

void boat_p1(void)
{
    char *player1_boats[] = {"A1:A3", "C5:F5", "G7:G9", "B2:B3"};
    char **player1_map;

    player1_map = boat_gen(player1_boats, player1_map);
    if (player1_map == NULL) {
        my_printf("Error: Unable to generate boats for Player 2\n");
        return 84;
    }
}

void boat_p2(void)
{
    char *player2_boats[] = {"A1:A3", "C5:F5", "G7:G9", "B2:B3"};
    char **player2_map;

    player2_map = boat_gen(player2_boats, player2_map);
    if (player2_map == NULL) {
        my_printf("Error: Unable to generate boats for Player 2\n");
        return 84;
    }
}
