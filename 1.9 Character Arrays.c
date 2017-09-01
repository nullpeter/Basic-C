//
// Created by Peter Pyne on 8/29/2017.
//

/* Having initially learned programming in Python, this code sample really confused me. I didn't understand that
 *
 * "When the name of an array is used as an argument, the value passed to the function is the location or address
 * of the beginning of the array - there is no copying of array elements."
 *
 * This is a new concept for me, but I mostly understand now how modifying s also modifies line.
 *
 * For Exercise 1-16 it's hard to know exactly what is being asked - answers on the internet vary wildly also. I take
 * the exercise to mean "print the length and content of the line in the main() function" - so that's what I'm going
 * for.
 *
 * For Exercise 1-17, I chose to stuff the length test in at the beginning,
*/

#include <stdio.h>
#define MAXLINE 1000                /* maxiumum input line size */

int getln(char line[], int maxline);/* refactored from getline to getln due to conflicting names in stdio.h lib */
void copy(char to[], char from[]);

/* print longest input line */
int main()
{
    int len;                        /* current line length */
    int max;                        /* maximum length seen so far */
    char line[MAXLINE];             /* current input line */
    char longest[MAXLINE];          /* longest line saved here */

    max = 0;
    while ((len = getln(line, MAXLINE)) > 0) {
        if (len > 80) {                         /* EX 1-17 - test if longer than 80 character */
            printf("\n");
            for (int j = 0; j <= len; ++j) {    /* count up while i = length */
                putchar(line[j]);               /* put each character */
            }
            printf("80+ Characters\n");
        }
        else {
            for (int i = 0; i <= len; ++i) {        /* EX 1-16 count up while i <= length fetched by getln */
                putchar(line[i]);                   /* put each character */
                if (i == (len - 1)) {               /* once i equals len, less the termination character \0 */
                    printf("%i Characters\n", i);   /* print the value of i */
                }
            }
        }
        if (len > max) {                    /* carry on as per normal */
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0)                   /* there was a line */
        printf("%s", longest);
    return 0;
}

/* getln: read a line into s, return length */
int getln(char s[], int lim)
{
    int c, i;
    printf("\n");                   /* For formatting, ease of reading */
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}