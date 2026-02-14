//Askisi 1
//Sinartiseis


#include <stdio.h>
#include <string.h>

#define SIZE 100

void favorite_movie(char movie_title[]);

int main(void) {
	
	char movie_title[SIZE];

	printf("Input your favorite movie: ");
	scanf("%s", movie_title);

	favorite_movie(movie_title);

	return 0;
}

void favorite_movie(char movie_title[]) {

	int i = 0;

	int result = strcmp(movie_title, "Batman\0");

	if (result == 0)
		printf("Good choice\n");
	else
		printf("awful taste\n");
}


