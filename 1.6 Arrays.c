//
// Created by Peter Pyne on 8/27/2017.
//

#include <stdio.h>

/* Exercise 1-13: Write a program to print a histogram of the lengths of words in its input. Vertical & horizontal.*/

main()
{
    int c, i, charcount;
    int wlenth[20];                     /* Create an array of common word lengths (1 - 20) */

    c = i = charcount = 0;              /* Initialize the values */

    for (i = 0; i < 20; ++i)            /* Prefills with 0's */
        wlenth[i] = 0;

/* Count the length of a word */

    while ((c = getchar()) != EOF)
        if (c != ' ' && c != '\n' && c != '\t') /* Count each letter unless the letter is whitespace / tab / newline */
            charcount++;
        else {
            wlenth[charcount]++;        /* Store the result in the array */
            charcount = 0;              /* Reset the counter */
        }
    for (i = 1; i < 20; ++i) {
        printf("%2d: ", i);
        while (wlenth[i]) {
            printf("|");
            wlenth[i]--;

        }
    printf("\n");
    }
}