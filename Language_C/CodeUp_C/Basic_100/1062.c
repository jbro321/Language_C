#include <stdio.h>

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d\n", a^b); //비트단위 연산 XOR
    return 0;
}