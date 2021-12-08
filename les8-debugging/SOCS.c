//
// Created by Jarne Plessers on 07/12/2021.
//

#include <stdio.h>

int main(void){
    register int k, x;
    for(k=0; k<1000; k++){
        int g;
        printf("Geef x: ");
        scanf("%d", &g);
        printf("X is: %d\n", g);
        printf("X^2 is: %d\n", g*g);
    }
}