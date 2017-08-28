//
// Created by Peter Pyne on 8/27/2017.
//

#include <stdio.h>

/* Exercise 1-14: Write a program to print a histogram of the frequencies of different characters in its input. */

main()
{
    int c, i, charcount, rcount;
    int wlenth[20];                     /* Create an array of common word lengths (1 - 20) */

    i = c = charcount = rcount = 0;              /* Initialize the values */

    for (i = 0; i < 20; ++i)            /* Prefills with 0's */
        wlenth[i] = 0;

/* Count the length of a word */

    while ((c = getchar()) != EOF)
        if (c == 'r') {
            rcount++;
        }
        else if (c != ' ' && c != '\n' && c != '\t') /* Count each letter unless the letter is whitespace / tab / newline */
            charcount++;
        else {
            wlenth[charcount]++;        /* Store the result in the array */
            charcount = 0;              /* Reset the counter */
        }
    if (rcount == 1)
        printf("There is 1 r in your input.");
    else if (rcount >= 1)
        printf("There are %d r's in your input.", rcount);
    else
        printf("\nThere are no r's in your input.");
    printf("\n\nH i s t o g r a m\n\n");

    for (i = 1; i < 20; ++i) {
        printf("%2d: ", i);
        while (wlenth[i]) {
            printf("|");
            wlenth[i]--;
        }
    printf("\n");
    }
}