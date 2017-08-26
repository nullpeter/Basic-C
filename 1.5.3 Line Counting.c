//
// Created by Peter Pyne on 8/26/2017.
//
// ***Warning. If you're developing in a Windows environment, this task WILL give you problems for two reasons
// 1 - Nowhere in the book does it tell you to press CTRL+Z to input an EOF. Do that to break out of the while loop.
// It ONLY works in CMD, not in any IDE's like Clion, so you actually have to compile it first.
// 2 - CMD will not accept a 'newline' character. I've tried. Just substitute it for tab ('\t') to get the gist
// of the script, as I have done here.
// Further reading: https://stackoverflow.com/questions/3646255/problem-with-example-1-5-2-in-kr-book-on-c

#include <stdio.h>

/* count TABS in input */
main()
{
    int c, tab;

    tab = 0;
    while ((c = getchar()) != EOF)
        if (c == '\t')
            ++tab;
    printf("%d\n", tab);
}