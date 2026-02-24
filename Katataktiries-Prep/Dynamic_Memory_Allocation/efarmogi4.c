#include <stdio.h>
#include <stdlib.h>

//read 10 words, store them in a dynamic data structure
#define SIZE 10
#define FALSE 0
#define TRUE 1

int check_string(char* str);
int mystrlen(char* s);
char *mystrcpy(char* dest, char* src);


int main() {

	char* words[SIZE];

	for (int i = 0; i < N; i++) {
		printf("Dose tin simboloseira no.%d: ", i + 1);
		gets(buffer);

		if(!check_string(buffer)){
			printf("Not valid input");
			exit(0);
		}

		len=mystrlen(buffer);
		words[i]=malloc(sizeof(char)*(len+1));
		if (!pinakas[i]) {
			printf("Could not find available memory");
			exit(0);
		}

		mystrcpy(pinakas[i], buffer);
	}

	printf("\n");
	for (int i = 0; i<N; i++)
		printf("Simvoloseira: %s", pinakas[i]);

	for (int i = 0; i<N; i++)
		free(pinakas[i]);
}

int check_string(char* str){
	
	int i=0;
	while (str[i] != '\0')
	{
		if(!(str[i]>='a' && str[i] <= 'z'))
		{
			return FALSE;
		}
		i++;
	}
	return TRUE;
}

int mystrlen(char *s)
{
	int cnt = 0;

	while(s[cnt] != '\0')
	{
		cnt++;
	}

	return cnt;
}

char* mystrcpy(char* dest, char* src)
{
	int i = 0;

	while(1)
	{
		dest[i]=src[i];
		if (src[i] == '\0')
			break;
		i++;
	}

	return dest;

}
