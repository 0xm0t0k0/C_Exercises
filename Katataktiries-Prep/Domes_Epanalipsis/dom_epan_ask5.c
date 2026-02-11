//Ασκ. 5 Make a program that takes an input of 10 ints, stores them in an array, 
//then prints out their sum

#include <stdio.h>

#define N 10

int main(void) {

	int array[N], sum_arr = 0;
	
	for(int i = 0; i < N; i++) {

		printf("Dose mu ton %do akeraio arithmo\n", i + 1);
		scanf("%d", &array[i]);
	}

	for(int i = 0; i < N; i++) {
		sum_arr += array[i];
	}

	printf("To athroisma twn arithmwn einai %d", sum_arr);

}
