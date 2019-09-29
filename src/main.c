#include <stdio.h>
#include <stdlib.h>
#include "deposit.h"
 
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
 
    printf("Deposit income is: %.2f \n", TaskCalculations(t, s));
    return 0;
}