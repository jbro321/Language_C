#include <stdio.h>

int main(void)
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", a+b+c);
    printf("%.1lf\n", (double)(a+b+c)/3);
    return 0;
}