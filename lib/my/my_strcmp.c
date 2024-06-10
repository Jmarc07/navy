/*
** EPITECH PROJECT, 2023
** strcmp
** File description:
** reproduce the strcmp function/task06
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i;

    for (i = 0; (s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'); i++){
    }
    return (s1[i] - s2[i]);
}
