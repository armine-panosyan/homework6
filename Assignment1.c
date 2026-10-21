#include <stdio.h>

int main() {
    int a = 10;
    char b = 'A';
    double c = 3.14;
    short d = 5;

    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of char: %zu bytes\n", sizeof(b));
    printf("Size of double: %zu bytes\n", sizeof(c));
    printf("Size of short: %zu bytes\n", sizeof(d));

    printf("\nMemory addresses:\n");
    printf("int:    %p\n", (void *)&a);
    printf("char:   %p\n", (void *)&b);
    printf("double: %p\n", (void *)&c);
    printf("short:  %p\n", (void *)&d);

    return 0;
}
