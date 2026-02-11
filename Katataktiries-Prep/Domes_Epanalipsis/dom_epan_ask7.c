//Askisi 7
//Domes Epanalipsis

#include <stdio.h>

int main (void) {
	int N;
	
	do {
		printf("Insert a number between 1 and 20: ");
		scanf("%d", &N);
	}while(N < 1 || N > 20);

	int array[N]; //Declare array
	
	//Populate array
	for(int i = 0; i < N; i++){
		printf("Insert random number: ");
		scanf("%d", &array[i]);
	}

	int min = array[0]; //Suppose that

	for(int i = 0; i < N; i++) {
		if (min > array[i])
			min = array[i];
	}

	printf("The minimum number you inserted is: %d\n",  min);

	return 0;
}
