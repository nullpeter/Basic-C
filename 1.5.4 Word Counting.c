//
// Created by Peter Pyne on 8/26/2017.
//

#include <stdio.h>

/* count lines, words, and characters in input */
/* For exercise 1-12, I'm going to print input one word per line */

main()
{
    int c;

    while ((c = getchar()) != EOF)  {
        if (c == ' ' || c == '\t')      /* If the character is a space or tab, output a newline */
            putchar('\n');
        else
            putchar(c);                 /* Otherwise, just print the character */
    }
}