//
// Created by Peter Pyne on 8/28/2017.
//
#include <stdio.h>

/* power: raise base to n-th power; n>=; version 2 */

long long power(int base, int n);
int n;

int base = 95;

int main (){
    printf("The standard english character set consists of 95 unique characters when including 0-9, a-z, A-Z, and"
                   " all special characters (!@#$) including space.\n\n");
    printf("Keyspace by length of password:\n\n");
    for (n = 4; n <= 10 ; ++n) {
        printf("%d ^ %d = %lld\n\n", base, n, power(base, n));
    }
}

long long power(int base, int n)
{
    long long p;

    for (p = 1; n > 0; --n)
        p = p * base;
    return p;
}