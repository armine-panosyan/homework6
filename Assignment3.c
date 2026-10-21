#include <stdio.h>

struct Normal {
    char a;
    int b;
    double c;
};

#pragma pack(push, 1)
struct Packed1 {
    char a;
    int b;
    double c;
};
#pragma pack(pop)

#pragma pack(push, 2)
struct Packed2 {
    char a;
    int b;
    double c;
};
#pragma pack(pop)

#pragma pack(push, 4)
struct Packed4 {
    char a;
    int b;
    double c;
};
#pragma pack(pop)

int main() {
    struct Normal s1;
    struct Packed1 s2;
    struct Packed2 s3;
    struct Packed4 s4;

    printf("Normal struct:\n");
    printf("Size: %zu bytes\n", sizeof(s1));
    printf("Address of a: %p\n", (void *)&s1.a);
    printf("Address of b: %p\n", (void *)&s1.b);
    printf("Address of c: %p\n", (void *)&s1.c);

    printf("\nPacked struct (pack 1):\n");
    printf("Size: %zu bytes\n", sizeof(s2));
    printf("Address of a: %p\n", (void *)&s2.a);
    printf("Address of b: %p\n", (void *)&s2.b);
    printf("Address of c: %p\n", (void *)&s2.c);

    printf("\nPacked struct (pack 2):\n");
    printf("Size: %zu bytes\n", sizeof(s3));
    printf("Address of a: %p\n", (void *)&s3.a);
    printf("Address of b: %p\n", (void *)&s3.b);
    printf("Address of c: %p\n", (void *)&s3.c);

    printf("\nPacked struct (pack 4):\n");
    printf("Size: %zu bytes\n", sizeof(s4));
    printf("Address of a: %p\n", (void *)&s4.a);
    printf("Address of b: %p\n", (void *)&s4.b);
    printf("Address of c: %p\n", (void *)&s4.c);

    return 0;
}
