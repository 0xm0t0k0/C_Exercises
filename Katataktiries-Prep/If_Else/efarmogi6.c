//Efarmogi 6
//Telestes & Domi Elegxou


#include <stdio.h>

int main(void) {

	int a1, a2, b1, b2;

	printf("Enter player A's dice throws: ");
	scanf("%d %d", &a1, &a2);

	printf("Enter player B's dice throws: ");
	scanf("%d %d", &a1, &a2);

	int sumA = a1 + a2;
	int sumB = b1 + b2;

	if(sumA > sumB)
		printf("Player A won!\n");
	else
		printf("Player B won!\n");

	return 0;
}

