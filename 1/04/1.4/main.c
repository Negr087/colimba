#include <stdio.h>
#include <stdlib.h>

/* Print Celsius-Fahrenheit table,
for celsius = 0, 20, 300; floating-point version */

int main()
{
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;   /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20;   /* step size */

    celsius = lower;
    while (celsius * 9.0/5.0) + 32.0;
    printf("%3.0f %3.1f\n", celsius, fahr);
    celsius = celsius + step;
}
return 0;
}
