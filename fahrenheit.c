//
// Created by Peter Pyne on 8/20/2017.
//

#include <stdio.h>
/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */

main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5 / 9) * (fahr-32);
        printf("%3d %6d\n", fahr, celsius);
        fahr = fahr + step;
    }
}