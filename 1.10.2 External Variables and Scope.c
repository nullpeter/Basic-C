//
// Created by Peter Pyne on 9/2/2017.
//

/*
 * Write a program 'detab' that replaces tabs in the input with the proper number of blanks to space to the next
 * tab stop/ Assume a fixed set of tab stops, say every n columns. Should n be a variable or symbolic parameter?
 *
 * I'm really not sure what this exercise is asking. My best guess is that it's looking for input that looks like this:
 *
 * content      content     content     content     content
 * content      content     content     content     content
 *
 * which consists of 5 columns of content, separated by tabs, and turns it into identical output, but replacing the
 * tabs with spaces:
 *
 * content      content     content     content     content
 * content      content     content     content     content
 *
 * After looking online though, and I didn't realise tabs worked in such a fashion, hitting tab acts like jumping
 * to a defined column on your page. I thought tabs were always just a fixed length jump of x spaces. TIL. This makes
 * things much more challenging.
 *
 * Oh, and by column, the book is referring to each character-width space of a given screen.
 *
 * So if 'n' is set to 4 as it is in my IDE (tab stops occur every 4 columns), and I insert a tab=> < it only jumps
 * one space to hit the next tab stop. We want to make sure the tabs we remove from input act in a similar fashion.
 *
 * How might we do that?
 *
 * Set the 'n' value (as a symbolic parameter)
 * Take a line
 * Count characters down from n until hitting a tab (432143214321) when a tab is encountered, insert that many spaces.
 * Example, 432143/t <- insert 2 spaces as /t landed on 2.
 *
 * As with most scenarios, I'm sure there are other ways of doing this - but this way works for me, without requiring
 * an additional step to calculate the number of spaces to insert.
 *
 * The most challenging part of this code was figuring out that if a '\t' landed exactly on the TABSPAN's position, it
 * needed to be handled differently. In hindsight, this is obvious, but it took some testing to sort out.
*/

#include <stdio.h>
#define TABSPAN 8                       /* Number of columns between tab stops */

int t = TABSPAN;
int c = 0;

int main(){
    while ((c = getchar()) != EOF){
        if (c == '\n' || t == 0) {
            t = TABSPAN;                /* Reset tabcount if a newline is encountered */
        }
        if (c == '\t') {                /* If a tab is detected... */
            c = 0;                      /* Don't write the tab */
            if (t == TABSPAN)           /* Handle tabs on the border */
                t = 0;
            for (; t != 0; --t) {       /* Write the amount of spaces based on tabspan */
                putchar(' ');
            }
            t = TABSPAN;                /* Update tabcount after doing spaces */
        }
        putchar(c);                     /* Otherwise write the character */
        --t;                            /* Count down from tabspan */
    }
}