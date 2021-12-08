//
// Created by Jarne Plessers on 06/12/2021.
//

#include <stdio.h>

int main(void)
{
    int character = fgetc(stdin);
    while (character != EOF)
    {
        printf("%c (ASCII: %d)\n", character, character);
        character = fgetc(stdin);
    }
    return 0;
}
