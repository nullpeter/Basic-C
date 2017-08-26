//
// Created by Peter Pyne on 8/25/2017.
//

#include <stdio.h>

/* print Fahrenheit-Celsius table
 * Reverse version (Exercise 1-5)
 * */
main()
{
    int fahr;

    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}