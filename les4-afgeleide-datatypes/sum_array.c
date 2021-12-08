//
// Created by Jarne Plessers on 03/12/2021.
//

#include <stdio.h>

int sum(void){
    int arr[] = {1, 10, 100, 1000, 10000};
    int total_memory_size = sizeof(arr);
    int element_memory_size = sizeof(arr[0]);
    int amount_of_elements = total_memory_size / element_memory_size;
    int som = 0;
    for(int a = 0; a<amount_of_elements; a++){
        som = som + arr[a];
    }
    printf("Som is: %d", som);
}

int tempnietmain(void){
    int my_array[] = {1, 2, 3};
    printf("my_array: %p\n", my_array);
    printf("&my_array: %p\n", &my_array);
    printf("&my_array[0]: %p\n", &my_array[0]);
    sum();
    return 0;
}


