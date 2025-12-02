#include <stdio.h>

int main()
{
    int a = 5;
    int b = 7;
    printf(" a = %d  and b = %d\n ", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d  and b = %d ", a, b);
    return 0;
}