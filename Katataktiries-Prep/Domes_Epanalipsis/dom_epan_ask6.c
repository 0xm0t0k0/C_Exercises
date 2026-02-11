//Askisi 6
//Domes Epanalipsis

#include <stdio.h>

#define N 5

int main(void) {

	int array[N], product = 1;
	
	//Populating array with for loop
	for(int i = 0; i < N; i++){

		do{
		printf("Insert one number from 1 to 8: ");
		scanf("%d", &array[i]);

		}while(array[i] < 1 || array[i] > 8); //Defensive programming handling cases
	}

	for(int i = 0; i < N; i++)
		product *= array[i];

	printf("Their product is: %d\n", product);
	
}







