//
// Created by Peter Pyne on 9/2/2017.
//

/*
 * This is just a copy of what's in the book for section 1.10, other than getline has been replaced with getln
 * to avoid naming conflicts.
 *
 * Interestingly, my CLion IDE complains that the local arrays (marked below) 'must be initialized'. Not a warning,
 * but an error message. Despire that, everything compiles and works as expected.
 *
*/

#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

int max;                /* maximum length seen so far */
char line[MAXLINE];     /* current input line */
char longest[MAXLINE];   /* current longest line saved here */

int getln(void);
void copy(void);



/* print longest input line; specialized version */
main()
{
    int len;
    extern int max;
    extern char longest[];      /* CLion IDE error here */

    max = 0;
    while ((len = getln()) > 0)
        if (len > max){
            max = len;
            copy();
        }
    if (max > 0)        /* there was a line */
        printf("%s", longest);
}



/* getline: specialized version */
int getln(void)
{
    int c, i;
    extern char line[];         /* CLion IDE error here */

    for (i = 0; i < MAXLINE-1
            && (c=getchar()) != EOF && c != '\n'; ++i)
                line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}


/* copy: specialized version */
void copy(void)
{
    int i;
    extern char line[], longest[];      /* CLion IDE error here */

    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}

