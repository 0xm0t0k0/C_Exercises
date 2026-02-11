//Efarmogi 1
//Telestes & Domes Elegxou


#include <stdio.h>

int main(void) {

	int age;

	printf("Enter your age: ");
	scanf("%d", &age);

	if(age < 18)
		printf("You are a minor\n");
	else if(age >= 18 && age <= 65)
		printf("You are an adult\n");
	else
		printf("You are an elder\n");

	return 0;
}
