//
// Created by Jarne Plessers on 05/12/2021.
//

#include <stdio.h>

int is_odd(int n, int *counter);

int is_even(int n, int *counter)
{

    (*counter)++;
    if (n < 0)
        n = -n;

    if (n == 0)
    {
        return 1;
    }
    else
    {
        return is_odd(n - 1, (int *) &counter);
    }
}

int is_odd(int n, int *counter)
{
    (*counter)++;
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return is_even(n - 1, (int *) &counter);
    }
}

int tempnietmain7()
{
    int function_call_counter = 0;
    int n = 21;
    if (is_even(n, &function_call_counter))
    {
        printf("%d is even\n", n);
    }
    else
    {
        printf("%d is odd\n", n);
    }
    printf("Checking the parity of %d only took us %d function calls!\n", n, function_call_counter);
    return 0;
}