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