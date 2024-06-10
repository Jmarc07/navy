/*
** EPITECH PROJECT, 2023
** convert function
** File description:
** str into int
*/

#include "my.h"

int str_into_int(const char *str)
{
    int sign = 1;
    int value = 0;

    while (*str == ' ' || *str == '\n' || *str == '\r') {
        str++;
    }
    if (*str == '-') {
        sign = -1;
        str++;
    } else if (*str == '+') {
        str++;
    }
    while (*str >= '0' && *str <= '9') {
        value = (value * 10) + (*str - '0');
        str++;
    }
    return sign * value;
}
