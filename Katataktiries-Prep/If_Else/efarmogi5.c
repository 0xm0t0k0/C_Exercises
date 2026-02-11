//Efarmogi 5
//Telestes k Domi Elegxou

#include <stdio.h>

int main(void) { 

	int seconds;
	
	printf("Enter a number: ");
	scanf("%d", &seconds);

	// Deuterolepta se wres einai /3600 
	 
	int hours = seconds / 3600;
	int minutes = (seconds % 3600) / 60;
	seconds = seconds % 60;

	printf("Hours: %d|Minutes: %d|Seconds: %d|\n", hours, minutes, seconds);
}
