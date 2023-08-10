#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
    char *new_str;
    char *p;
    int len = 0;

    if (str == NULL)
    return (NULL);
    while (new_str[len])
        len++;
    new_str = malloc(len + 1);
    p = new_str;
    while (*new_str)
        *p++ = *new_str++;
    *p = '\0';
    return (new_str);
}