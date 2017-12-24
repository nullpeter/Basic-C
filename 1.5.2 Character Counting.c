//
// By Peter Pyne on 8/26/2017.
//

#include <stdio.h>

/* count characters in input; 2nd version */
main()
{
    int nc; //As per CLion IDE, the loop induction expression should not have floating point type, so I changed to int

    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0d\n", nc);
}