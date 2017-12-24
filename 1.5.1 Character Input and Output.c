//
// Created by Peter Pyne on 8/26/2017.
//
#include <stdio.h>

/* copy input to output; 2nd version (1.5.1) */
main() {
    int c;
    int b = EOF;                             // Assign EOF to an integer variable. It wouldn't print on it's own
    printf("EOF is equal to %d\n", b);       // Standard printing of digit variable. Prints EOF as per Ex. 1-7

    while (((c = getchar()) != EOF))         // Here I compare the value of original expression to 0 or 1 to verify
    {                                        // that the expression getchar() != EOF is 0 or 1. I don't know how to
                                             // print it otherwise. As per Exercise 1-6
        putchar(c);
    }
}