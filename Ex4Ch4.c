/*Exercise 4 Chapter 11*/
#include <stdio.h>

void swap(int *p, int *q);

int main(void)
{
    int i, j;
    scanf("%d %d", &i, &j);
    printf("i = %d j = %d\n", i, j);

    swap(&i, &j);
    printf("i = %d j = %d\n", i, j);
}

void swap(int *p, int *q)
{
    int tmp;

    tmp = *p;

    *p = *q;

    *q = tmp;
}