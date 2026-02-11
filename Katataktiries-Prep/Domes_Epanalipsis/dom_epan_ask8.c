//Askisi 8 
//Domes Epanalipsis

#include <stdio.h>

int main (void) {

	int N;

	do {
		printf("Insert a number between 1 and 20: ");
		scanf("%d", &N);
	}while(N < 1 || N > 20);

	int array[N];

	for(int i = 0; i < N; i++) {
		printf("Insert random number: ");
		scanf("%d", &array[i]);
	}

	int sum = 0;

	for(int i = 0; i < N; i++) {
		sum += array[i];
	}
	
	float avg = (float)sum / N;

	printf("The average of the inserted numbers is %.2f\n", avg);

	return 0;
}

