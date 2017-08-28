//
// Created by Peter Pyne on 8/28/2017.
//

#include <stdio.h>

int power(int base, int n);                         /* Changed so parameter names match */
float ctof(int celsius);
float ftoc(int fahr);

/* Test power function */
/* Convert celsius to fahrenheit using a function */
/* Convert fahrenheit to celsius using a function */
/* For exercise 1-15. I also changed a couple things to appease warnings in CLION*/

int main()
{
    int i, celsius, fahr;

    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    printf("\n\nCelsius to Fahrenheit:\n\n");
    for (celsius = -40; celsius < 50; celsius += 10)
        printf("%3dC\t\t%5.1fF\n", celsius, ctof(celsius));
    printf("\n\nFahrenheit to Celsius:\n\n");
    for (fahr = -40; fahr < 120; fahr += 10 )
        printf("%3dF\t\t%5.1fC\n", fahr, ftoc(fahr));
    return 0;
}

/* power: raise base to n=th power; n >= 0 */
int power(int base, int n)
{
    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;
    return p;
}

/* celsius to fahrenheit conversion function */

float ctof(int celsius)
{
    float fahr;
    fahr = (float) ((celsius * (9.0 / 5.0)) + 32.0);
    return fahr;
}

/* fahrenheit to celsius conversion function */

float ftoc(int fahr)
{
    float celsius;
    celsius = (float) ((fahr - 32.0) * (5.0 / 9.0));
    return celsius;
}