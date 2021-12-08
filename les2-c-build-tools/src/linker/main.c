//
// Created by Jarne Plessers on 01/12/2021.
//

#include <stdio.h>
#include "math.h"

int fizzbuzz(void){
    for(int i=0; i<100; i++){
        if(i%3==0 && i%5 != 0){
            printf("Fizz\n");
        }
        if(i%5 == 0 && i%3 != 0){
            printf("Buzz\n");
        }
        if(i%5 == 0 && i%3 == 0){
            printf("FizzBuzz\n");
        }
        if(i%5 !=0 && i%3 != 0){
            printf("%d \n", i);
        }
    }
    return 0;
}

int les3(){
    for (char c = 1; c != 0; c++)
    {
        //%hhd -> signed number of 1 byte in size
        printf("%hhu \n", c);
    }
    return 0;
}

int int_byte_lenght(void){
    printf("Size of int: %lu\n", sizeof(int));
    printf("Size of short: %lu\n", sizeof(short));
    printf("Size of char: %lu\n", sizeof(char ));
    printf("Size of long: %lu\n", sizeof(long));
    printf("Size of long long: %lu\n", sizeof(long long));
    printf("Size of float: %lu\n", sizeof(float));
    printf("Size of double: %lu\n", sizeof(double ));
    printf("Size of long double: %lu\n", sizeof(long double));
    return 0;
}

int print10(void){
    for(int a = 1; a<=10; a++){
        printf("%d\n", a);
    }
    for(int a = 1; a<=10; ++a){
        printf("%d\n", a);
    }
    return 0;
}

int main(void){
    int g;
    printf("Geef een getal: ");
    scanf("%d", &g);
    printf("%d ste element van Fibonnaci is %d, Faculteit van %d is %d \n", g, fibonnaci(g-1), g, factorial(g));
    //les3();
    fizzbuzz();
    return 0;
}