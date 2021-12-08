//
// Created by Jarne Plessers on 05/12/2021.
//

#include <stdio.h>

int manhatten_distance();
int absolute_value();

struct manhatten_distance_data{
    int x1;
    int x2;
    int y1;
    int y2;
};

int tempnietmain5(void){
    struct manhatten_distance_data a;
    a.x1 = 3;
    a.x2 = -16;
    a.y1 = -13;
    a.y2 = 24;
    printf("%d", manhatten_distance(a));
    return 0;
}

int manhatten_distance(struct manhatten_distance_data a){
    return absolute_value((a.x2-a.x1)) + absolute_value((a.y2-a.y1));
}

int absolute_value(a){
    if(a>0){
        return a;
    } else{
        return -a;
    }
}