//Ch12 ex 7

#include <stdio.h>

#define N 10


bool search(const int a[], int n, int key);

int main(void)
{
    int key;
    printf("Enter key: ");
    scanf("%d", &key);
    
    int a[N];
    printf("Enter array: ");
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);

    bool value;
    value = search(a, N, key);

    if (value == true)
        printf("Match found");
    else
        printf("No match");

    return 0;
}

bool search(const int a[], int n, int key)
{
    int *p;

    for (p = a; p < a + n; p++)
    {
        if (key == *p)
            return true;
    }
    return false;
}