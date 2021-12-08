//
// Created by Jarne Plessers on 03/12/2021.
//

#include <stdint.h>
#include <stdio.h>

void swap(int *a, int *b);

int tempnietmain3(void){
    char bad_str[] = {'x', 'y', 'z'};
    const char *good_str1 = "abc";
    char good_str2[] = {'d', 'e', 'f', '\0'};
    char good_str3[] = {103, 104, 105, 0};

    printf("Bad: %s\n", bad_str);
    printf("Good 1: %s\n", good_str1);
    printf("Good 2: %s\n", good_str2);
    printf("Good 3: %s\n", good_str3);
    return 0;
}

int tempnietmain2(void){
    int a = 7;
    int b = 24;
    printf("a is %d, b is %d\n", a, b);
    printf("Nu wordt de swap functie gebruikt: \n");
    swap(&a, &b);
    printf("a is %d, b is %d\n", a, b);
    return 0;
}

void swap(int *a, int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
}
