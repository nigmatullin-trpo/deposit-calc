#include <stdio.h>
#include <stdlib.h>

int InputTime(float t)
{
    if (t >= 0 && t <= 365)
    return 1;
    return 0;
}
 
int InputSum(float s)
{
    if (s >= 10000)
    return 1;
    return 0;
}

int main()
{
	float t = 0;
    float s = 0;

    while(1)
    {
        printf("Enter deposit time: ");
        scanf("%f", &t);
        if(InputTime(t)) break;
        printf("Incorrect value, try again \n");
    }
 
    while(1)
    {
        printf("Enter deposit amount: ");
        scanf("%f", &s);
        if(InputSum(s)) break;
        printf("Incorrect value, try again \n");
    }

	return 0;
}