/*Fibonacci sequence*/
#include <stdio.h>

//Takes input <20 number of terms \
//Outputs the first n termf of the series
int recurse_function(int n);

int main(void)
{
    int x;
    printf("Enter how many terms of the fibonacci sequence you want displayed(less than 20): ");
    do{
    scanf("%d", &x);
    }while (x > 20);

    printf("The terms are: ");
    for(int i = 0; i < x; i++){
        printf("%d ", recurse_function(i));
    }
    

    
    return 0;
}

int recurse_function(int n)
{
    if (n == 0){
        return 1;
    }
    if (n == 1){
        return 1;
    }
    else
    {   return recurse_function(n-1) + recurse_function(n-2);
    }
}