/*
** EPITECH PROJECT, 2024
** TECH 1 : Navy
** File description:
** generate map
*/

#include <stdio.h>

void generate_map(void)
{
    char *map[] = {
        "........",
        "........",
        "........",
        "........",
        "........",
        "........",
        "........",
        "........",
        NULL
    };

    my_printf(" |A B C D E F G H\n-+---------------\n");
    for (int i = 0; map[i]; i++) {
        my_printf("%d|", i + 1);
        for (int j = 0; map[i][j]; j++) {
            my_printf("%c ", map[i][j]);
        }
        my_printf("\n");
    }
}
