#include <stdio.h>

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d\n", a>b ? a:b); //3항 연산자 ?
    return 0;
}