#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int M, N;

	//Ask for size of rows and columns
	scanf("%d%d", &M, &N);

	int **p ;
	p = malloc(sizeof(int*) * M);
	if (p == NULL) {
		printf("Couldn't find space in memory");
		exit(0);
	}

	for (int i = 0; i < M; i++) {
		p[i] = (int *)malloc(sizeof(int) * N);
		if (!p[i]) {
			printf("Failed");
			//Free previously allocated rows
			for (int j = 0; j < i; j++)
				free(p[j]);
			free(p);
			exit(0);
		}
	}

	int total_bytes = 0;

	for (int i = 0; i < M; i++) {
		free(p[i]);
	}
	free(p);
	return 0;
}


