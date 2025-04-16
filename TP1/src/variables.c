#include <stdio.h>

int main() {
    // char
    signed char c1 = -100;
    unsigned char c2 = 200;

    // short
    signed short s1 = -30000;
    unsigned short s2 = 60000;

    // int
    signed int i1 = -100000;
    unsigned int i2 = 300000;

    // long int
    signed long int l1 = -1000000L;
    unsigned long int l2 = 3000000UL;

    // long long int
    signed long long int ll1 = -5000000000LL;
    unsigned long long int ll2 = 10000000000ULL;

    // float
    float f = 3.14f;

    // double
    double d = 2.71828;

    // long double
    long double ld = 1.6180339887L;

    // Affichage
    printf("signed char : %d\n", c1);
    printf("unsigned char : %u\n", c2);

    printf("signed short : %d\n", s1);
    printf("unsigned short : %u\n", s2);

    printf("signed int : %d\n", i1);
    printf("unsigned int : %u\n", i2);

    printf("signed long int : %ld\n", l1);
    printf("unsigned long int : %lu\n", l2);

    printf("signed long long int : %lld\n", ll1);
    printf("unsigned long long int : %llu\n", ll2);

    printf("float : %.2f\n", f);
    printf("double : %.5f\n", d);
    printf("long double : %.10Lf\n", ld);

    return 0;
}
