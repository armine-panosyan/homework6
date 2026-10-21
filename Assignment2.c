#include <stdio.h>

struct First {
    char a;
    int b;
    double c;
};

struct Second {
    double c;
    int b;
    char a;
};

int main() {
    struct First s1;
    struct Second s2;

    printf("First struct (char, int, double):\n");
    printf("Size: %zu bytes\n", sizeof(s1));
    printf("Address of a: %p\n", (void *)&s1.a);
    printf("Address of b: %p\n", (void *)&s1.b);
    printf("Address of c: %p\n", (void *)&s1.c);

    printf("\nSecond struct (double, int, char):\n");
    printf("Size: %zu bytes\n", sizeof(s2));
    printf("Address of c: %p\n", (void *)&s2.c);
    printf("Address of b: %p\n", (void *)&s2.b);
    printf("Address of a: %p\n", (void *)&s2.a);

    return 0;
}
