//
// Created by Jarne Plessers on 05/12/2021.
//

#include <stdio.h>

struct person
{
    const char *first_name;
    const char *last_name;
    int age;
};

void print_personal_information(struct person p)
{
    printf("First name: %s\n", p.first_name);
    printf("Last name: %s\n", p.last_name);
    printf("Age name: %d\n", p.age);
}

int tempnietmain4(void)
{
    struct person p;
    p.first_name = "Bob";
    p.last_name = "Marley";
    p.age = 36;
    print_personal_information(p);
    printf('%d', sizeof (struct person));
    return 0;
}