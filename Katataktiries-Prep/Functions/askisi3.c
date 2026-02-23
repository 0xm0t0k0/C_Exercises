//Askisi 3
//Functions
//Elegxos akeraiou


#include <stdio.h>

int input_integer();

int main(void) {

	int result = input_integer();

	printf("%d\n", result);
}

int input_integer() {
	
	int input;
	printf("Input an int: ");
	scanf("%d", &input);
	return input;
}
	

