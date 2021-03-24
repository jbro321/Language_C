#include <stdio.h>

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d\n", !a&&!b); //not A and not B
    return 0;
}