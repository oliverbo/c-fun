#include <stdio.h>
#include "pointers.h"

void swap(int *i, int *j) {
    int t = *i;
    *i = *j;
    *j = t;
}

void test_swap() {
    int a = 3;
    int b = 5;
    int *p = &a;

    printf("Pointer p=%x points to %d\n", p, *p);

    printf("Before a=%d, a=%d\n", a, b);

    swap(&a, &b);

    printf("After a=%d, b=%d\n", a, b);
}