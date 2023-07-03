#include <stdio.h>

#define STEP 20
#define MAXF 300

float tempC(float fahr);

int main()
{
    float fahr;
    fahr = 0;
    while(fahr <= MAXF)
    {
        printf("%3.1f \t %6.3f\n", fahr, tempC(fahr));
        fahr = fahr + STEP;
    }
    return 0;
}

float tempC(float fahr)
{
    float c;
    c = (5.0 / 9.0)*(fahr - 32);
    return c;
}

