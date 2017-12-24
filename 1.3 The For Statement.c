//
// By Peter Pyne on 8/25/2017.
//

#include <stdio.h>

 /* print Fahrenheit-Celsius table
    Reverse version (Exercise 1-5) */

 main()
{
    int fahr;

    for (fahr = 300; fahr >= 0; fahr -= 20)
        // The %3d indicates 3 spaces allocated to print an integer
        // The %6.1 indicates 6 spaces allocated to print a float with decimal to 1 position (eg. 1.1)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}