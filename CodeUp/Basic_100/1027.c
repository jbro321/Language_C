#include <stdio.h>

int main(void)
{
    int y, m, d;
    scanf("%d.%d.%d", &y, &m, &d);
    printf("%02d-%02d-%04d\n", d, m, y);

    return 0;
}