#include <stdio.h>

int main ()
{
    int a = 10, b = 20, c = 10;
    int res;

    res = (a > b);
    printf("a > b = %d\n", res);
    res = (a >= b);
    printf("a >= b = %d\n", res);
    res = (a < b);
    printf("a < b = %d\n", res);
    res = (a <= b);
    printf("a <= b = %d\n", res);
    res = (a == b);
    printf("a == b = %d\n", res);
    res = (a != b);
    printf("a != b = %d\n", res);

    return 0;
}