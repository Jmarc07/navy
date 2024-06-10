/*
** EPITECH PROJECT, 2024
** main.c
** File description:
** main
*/

#include "../include/my.h"
#include "../include/file_navy.h"
#include <signal.h>
#include <unistd.h>
#include <stdio.h>

void cc(void)
{
    char *str;
    char **map;
    int start_row = str[3] - '0';
    int start_col = (str[2] - 'A' + 1) * 2;
    int end_row = str[6] - '0';
    int end_col = (str[5] - 'A' + 1) * 2;
    char boat_symbol = str[0];

    for (int row = start_row; row <= end_row; row++) {
        if (map[row][start_col] != '.')
            return NULL;
        map[row][start_col] = boat_symbol;
    }
}

void ccc(void)
{
    char *str;
    char **map;
    int start_row = str[3] - '0';
    int start_col = (str[2] - 'A' + 1) * 2;
    int end_row = str[6] - '0';
    int end_col = (str[5] - 'A' + 1) * 2;
    char boat_symbol = str[0];

    for (int col = start_col; col <= end_col; col++) {
        if (map[start_row][col] != ' ' && map[start_row][col] != '.')
            return NULL;
        map[start_row][col] = boat_symbol;
    }
}

char **place_boat(char *str, char **map)
{
    int start_row = str[3] - '0';
    int start_col = (str[2] - 'A' + 1) * 2;
    int end_row = str[6] - '0';
    int end_col = (str[5] - 'A' + 1) * 2;
    char boat_symbol = str[0];

    if (start_row == end_row) {
        ccc();
    } else if (start_col == end_col) {
        cc();
    }
    return map;
}

char **boat_gen(char **file, char **map)
{
    for (int i = 0; i < 4; i++) {
        if (place_boat(file[i], map) == NULL) {
            return NULL;
        }
    }
    return map;
}
