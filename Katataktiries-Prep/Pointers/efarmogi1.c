#include <stdio.h>
#include <math.h>


int rizes(float a, float b, float c, float* x1, float* x2);
//Ypologismos ax^2 + bx + c = 0;


int main() {
	float a,b,c,riza1,riza2;

	scanf("%f%f%f", &a, &b, &c);

	int plithos = rizes(a,b,c,&riza1,&riza2);

	if (plithos==0)
		printf("Den exei pragmatikes rizes");
	else if (plithos==1)
		printf("Exei dipli riza tin %f", riza1);
	else 
		printf("Exei rizes: %f kai %f", riza1, riza2);
	

	return 0;
}

int rizes(float a, float b, float c, float* x1, float* x2)
{
	//Diakrinousa 3 epiloges an >0 2 rizes
	//An = 0, 1 riza
	//An <0, den exei pragmatikes rizes
	
	float d = (b * b) - (4*a*c);
	
	if (d < 0){
		return 0;
	}
	else if (d == 0){
		*x1 = -b / (2*a);
		return 1;
	}
	else{
		*x1 = (-b + sqrt(d)) / (2*a);
		*x2 = (-b - sqrt(d)) / (2*a);
		return 2;
	}
}



