//
// Created by Peter Pyne on 9/1/2017.
//

/* This is the final exercise of section 1.9. The task asks us to write a function that reverses a string, within
 * a program that reverses its input a line at a time. The sticky part here for me was getting a clean exit on
 * detecting EOF. If I put the EOF detection in the while loop, it took an extra keypress before the program
 * would exit, and that bothered me. So, seeing as main wasn't returning anything important anyway, I used the
 * return as an exit to break out of the infinite loop and the for loop at the same time.*/


#include <stdio.h>
#define MAXLINE 1000                /* maxiumum input line size */

/* Variables */
void reverse(char s[], int i);

int main() {
    int c, i = 0;
    char s[MAXLINE];

    while (1) {
        for (; (c = getchar()) != '\n'; ++i) {
            if (c == EOF) {
                return 0;
            }
            s[i] = c;
        }
        reverse(s, i);
        i = 0;
    }
}

/* Reversing function */

void reverse(char s[], int i){
    for (; i != 0; i--) {
        putchar(s[i - 1]);
    }
    printf("\n");
}