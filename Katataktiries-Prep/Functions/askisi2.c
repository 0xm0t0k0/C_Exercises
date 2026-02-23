//Askisi 2
//Functions

#include <stdio.h>
#include <string.h>

#define SIZE 50
#define ITERATIONS 500

void favorite_author(char author[]);

int main(void) {

	char author[SIZE];

	printf("Input your Favourite Author: ");
	scanf("%s", author);

	favorite_author(author);

	return 0;
}

void favorite_author(char author[]) {

	int result = strcmp(author, "Tolkien\0");
	
	if (result == 0) {
		for(int i = 0; i < ITERATIONS; i++)
			printf("Tolkien is the best\n");
	}
	else
		printf("%s is good.\n ", author);
	
}



