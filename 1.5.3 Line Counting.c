//
// By Peter Pyne on 8/26/2017.
//
// ***Warning. If you're developing in a Windows environment, this task WILL give you problems.
// 1 - Nowhere in the book does it tell you to press CTRL+Z to input an EOF. Do that to break out of the while loop.
// It ONLY works in CMD, not in any IDE's like Clion, so you actually have to compile it first.

#include <stdio.h>

/* Copy input to output, replacing each tab by \t, backspace by \b, and backslash by \\ as per ex 1-10 */
/* Note, the backspace character can't be replicated in CMD to my knowledge, but everything else works in windows */
/* Not elegant, but satisfies the exercise goal. */

main()
{
    int c;

    while ((c = getchar()) != EOF)
        if (c == '\t')
            printf("\\t");
        else if (c == '\b')
            printf("\\b");
        else if (c == '\\')
            printf("\\\\");
        else
            putchar(c);                     /* We print regular characters normally. */
}