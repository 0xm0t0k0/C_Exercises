#include <stdio.h>

//Globar array (cache)
//Max size of 20

long long cache[20] = {-1}; //all -1 to signify not computed 

long long fibonacci_memoized(int n);

int main(void){

    int x;

    printf("Enter how many terms of fibonacci sequence: ");

    do {
        scanf("%d", &x);
    }while (x < 1 || x > 20); //bounds checking


    printf("The terms are: ");

    for (int i = 0; i < x; i++)
    {
        printf("%lld ", fibonacci_memoized(i));

    }
    printf("\n");

    return 0;
}

long long fibonacci_memoized(int n)
{
    //First we check the cache
    if (cache[n] != -1) {
        return cache[n];
    }

    long long result;

    if ( n == 0 ){
        result = 0;
    }
    else if (n == 1) {
        result = 1;
    }
    else
    {
        result = fibonacci_memoized(n-1) + fibonacci_memoized(n-2);
    }

    cache[n] = result; //Now we store it in cache so that it is accessible

    return result; //exit

}