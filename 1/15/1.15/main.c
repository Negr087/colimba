#include <stdio.h>

/* Function to calculate power */
double power(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; i++) {
            result *= base;
    }
    return result;
    }

int main()
{
    double fahr, celsius;
    int lower, upper, step;

    lower = 0;     /* lower limit of temperature table */
    upper = 300;   /* upper limit */
    step = 20;     /* step size */

    printf("Table of Fahrenheit and Celsius\n"); /* Heading */

    fahr = lower;
    while (fahr <= upper) {
        celsius = power(5.0, 9) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}
