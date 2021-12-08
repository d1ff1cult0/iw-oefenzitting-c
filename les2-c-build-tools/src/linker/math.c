int absolute_value(int a)
{
    if (a < 0)
    {
        return -a;
    }
    else
    {
        return a;
    }
}

int fibonnaci(int n){
    if(n == 0 || n ==1){
        return n;
    } else{
        return fibonnaci(n-1) + fibonnaci(n-2);
    }
}

int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    } else{
        return n * factorial(n-1);
    }
}

int is_multiple(x, y){
    if(x%y == 0){
        return 1;
    } else{
        return 0;
    }
}