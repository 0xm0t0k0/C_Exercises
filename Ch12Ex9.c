//Ch12 Ex9

#include <stdio.h>

#define N 10

double inner_product(const double *a, const double *b, int n); //Function returns a[0] * b[0] + ... + a[n-1] * b[n-1]

int main(void)
{
    double a[N], b[N];

    printf("Enter first set of numbers: ");
    for (int i = 0; i < N; i++)
        scanf("%lf", &a[i]);

    printf("Enter second set of numbers: ");
    for (int i = 0; i < N; i++)
        scanf("%lf", &b[i]);

    double x;
    x = inner_product(a, b, N);

    printf("%.2f", x);
    
    return 0;
}

double inner_product(const double *a, const double *b, int n)
{
    const double *p , *q;
    double sum = 0;
    q = b;

    for (p = a; p < a + n; p++)
    {
        sum += *p * *q++;
    }

    return sum;
}