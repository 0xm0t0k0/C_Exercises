#include <stdio.h>
#define p 3.14f

//Calculate the volume of a 10-meter radius sphere

int main(void)
{
    int r;
    printf("What is the radius of the sphere: ");
    scanf("%d", &r);
    float volume = 4.0f / 3.0f * p * r * r * r;
    
    printf ("%.2f\n", volume);

    return 0;

}