//
// Created by Peter Pyne on 8/25/2017.
//

#include <stdio.h>
/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300; floating-point version
 * Adding header above table
 * Adding Celsius-Fahrenheit table */

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -40;      /* lower limit of temperature table */
    upper = 110;    /* upper limit */
    step = 10;      /* step size */

    fahr = lower;

    printf("Fahrenheit\tCelsius\n");

    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%.0f\t\t%.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    printf("\n");
    printf("Celsius\t\tFahrenheit\n");
    celsius = lower;
    upper = 50;

    while (celsius <= upper) {
        fahr = (9.0 / 5.0) * celsius + 32;
        printf("%0.f\t\t%.0f\n", celsius, fahr);
        celsius = celsius + step;
    }

}