#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int M, N;
    printf("Enter the number of rows (M): ");
    scanf("%d", &M);
    printf("Enter the number of columns (N): ");
    scanf("%d", &N);

    // Dynamically allocate a 2D array
    int **p = (int **)malloc(M * sizeof(int *));
    if (!p) {
        printf("Memory allocation failed for row pointers.\n");
        exit(0);
    }
    for (int i = 0; i < M; i++) {
        p[i] = (int *)malloc(N * sizeof(int));
        if (!p[i]) {
            printf("Memory allocation failed for row %d.\n", i);
            // Free previously allocated rows
            for (int j = 0; j < i; j++) {
                free(p[j]);
            }
            free(p);
            exit(0);
        }
    }
    int total_bytes = 0;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
             total_bytes += sizeof(int);
        }
    }

    printf("Total memory allocated for the 2D array: %d bytes\n", total_bytes);

    for (int i = 0; i < M; i++) {
        free(p[i]);
    }
    free(p);
    return 0;
}