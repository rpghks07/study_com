#include <stdio.h>

int main()
{
    int a = 10, b = 12;

    printf("a & b = %d\n", a & b);
    printf("a ^ b = %d\n", a ^ b);
    printf("a | b = %d\n", a | b);
    printf("~a = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> b = %d\n", a >> 1);

    return 0;
}