#include <stdio.h>

int main() 
{
    short sh = 32767;
    int in = 2147483647;
    long ln = 2147483648;
    long long lln = 9223372036854775807;

    printf("short형 변수 출력 : %d\n", sh);
    printf("int형 변수 출력 : %d\n", in);
    printf("long형 변수 출력 : %ld\n", ln);
    printf("long long형 변수 출력 : %lld\n", lln);

    return 0;
}