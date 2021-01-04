#include <stdio.h>

void main(void) {
    int a = 300;
    int b = 100;

    int c = a + b;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("a + b = %d\n", a + b);

    b = 200;

    printf("b = %d\n", b);
}