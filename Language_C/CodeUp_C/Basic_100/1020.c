#include <stdio.h>

int main(void)
{
    int f, b;
    scanf("%d-%d", &f, &b);
    printf("%06d%07d", f, b);
    return 0;
}