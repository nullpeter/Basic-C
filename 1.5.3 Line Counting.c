//
// Created by Peter Pyne on 8/26/2017.
//
// ***Warning. If you're developing in a Windows environment, this task WILL give you problems.
// 1 - Nowhere in the book does it tell you to press CTRL+Z to input an EOF. Do that to break out of the while loop.
// It ONLY works in CMD, not in any IDE's like Clion, so you actually have to compile it first.

#include <stdio.h>

/* Copy input to output, replace each string of one or more blanks with a single blank as per Ex 1-9*/
/* I had to Google for assistance with this one. Managed to get the right code, but needed the hint */
/* to call getchar() a second time to ignore consecutive spaces. Makes sense to me now. */

main()
{
    int space, c;
    space = 0;

    while ((c = getchar()) != EOF)
        if (c == ' ')
            {
            while ((c = getchar()) == ' ')  /* Testing if the first character after the 1st space is another space */
                ;                           /* If it is, we do nothing (ignore the space and ask again) */
            printf(" ");                    /* If it isn't, we print the initial space */
            putchar(c);                     /* Followed by the input that broke us out of the second while loop */
            }
        else
            putchar(c);                     /* We print non spaces normally. */
}