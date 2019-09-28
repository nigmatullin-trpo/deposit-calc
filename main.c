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
 
float TaskCalculations(float t, float s)
{
    int f;
 
    if (t >= 0   && t <= 30 )   f = 1;
    if (t >= 31  && t <= 120)   f = 2;
    if (t >= 121 && t <= 240)   f = 3;
    if (t >= 241 && t <= 365)   f = 4;
   
    if (s < 100000)
    {
        switch(f)
        {
            case 1: s -= (((s/100) * 10)/ 365) * t; break;
            case 2: s += (((s/100) * 2 )/ 365) * t; break;
            case 3: s += (((s/100) * 6 )/ 365) * t; break;
            case 4: s += (((s/100) * 12)/ 365) * t; break;
        }
    }
    else
    {
        switch(f)
        {
            case 1: s -= (((s/100) * 10)/ 365) * t; break;
            case 2: s += (((s/100) * 3 )/ 365) * t; break;
            case 3: s += (((s/100) * 8 )/ 365) * t; break;
            case 4: s += (((s/100) * 15)/ 365) * t; break;
        }
    }
 
    return s;
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
 
    printf("Deposit income is: %.2f \n", TaskCalculations(t, s));
    return 0;
}