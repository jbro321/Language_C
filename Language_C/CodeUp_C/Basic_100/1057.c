#include <stdio.h>

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d\n", (!a&&!b)||(a&&b)); //(not A and not B) or (A and B)
    return 0;
}