#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


size_t print_list(const list_t *h)
{
    size_t num = 0;

    while (h != NULL)
    {
        if (h -> str == NULL)
        {
            printf("[0] (nil)\n"):
        }
        else
        {
            print("[%d] %s/n", h -> len, h -> str);
        }
        h = h -> next;
        num++;
    }
    return (num);
}