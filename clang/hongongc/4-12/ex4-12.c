#include <stdio.h>

int main() 
{
    int a = 10, b = 20;
    int res = (a > b) ? a : b;

    printf("큰 값 : %d", res);
    
    return 0;
}