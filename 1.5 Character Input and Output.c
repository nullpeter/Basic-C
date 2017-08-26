//
// Created by Peter Pyne on 8/26/2017.
//
#include <stdio.h>

/* copy input to output; 2nd version (1.5.1) */
main()
{
    int c;

    while (((c = getchar()) != EOF) == 1) { /* Here I compare the value of original expression to 0 or 1 to verify
                                             * that the expression getchar() != EOF is 0 or 1. I don't know how to
                                             * print it otherwise. As per Exercise 1-6 */
        putchar(c);
    }
}