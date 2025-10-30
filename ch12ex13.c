//Chapter 12 Ex 13

#include <stdio.h>

#define N 10


int main(void){
    double *p;
    double ident[N][N];
    int row, col;
    int count = N;
    
    for (p = &ident[0][0]; p <= &ident[N - 1][N - 1]; p++)
    {

        if (count == N){
            *p = 1.0;
            count = 0;
        }
        else{
            *p = 0.0;
            count += 1;
        }
    }       

//TODO: Rewrite this loop to use only a single pointer to go through the array:

/*for (row = 0; row < N; row++){
    for (col = 0; col < N; col++)
    {
        if (row == col)
            ident[row][col] = 1.0;
        else
            ident[row][col] = 0.0;
    }
}*/

for (row = 0; row < N; row++)
    {
        for (col = 0; col < N; col++)
            printf("%.0f", ident[row][col]);
    }
    return 0;
}