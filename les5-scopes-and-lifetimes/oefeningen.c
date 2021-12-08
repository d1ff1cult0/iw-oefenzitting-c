//
// Created by Jarne Plessers on 05/12/2021.
//

#include <stdio.h>

int tijdelijknietmain6(void){
    int *p;
    {
        int a = 42;
        p = &a;
    }
    printf("The value of a is %d\n", *p);
    return 0;
}
