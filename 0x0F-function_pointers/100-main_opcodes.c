#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

int main(int argc, char *argv[]) {
    int x, i;
    
    if (argc != 2) {
        printf("Error\n");
        return (1);
    }

    x = atoi(argv[1]);

    if (x < 0) {
        printf("Error\n");
        return (2);
    }

    void *mainx = main;

    for (int i = 0; i < x; i++) {
        unsigned char opcode;
        int result = *((unsigned char *)(mainx + i));

        printf("%02x", result);

        if (i < x - 1) {
            printf(" ");
        } else {
            printf("\n");
        }
    }

    return 0;
}
