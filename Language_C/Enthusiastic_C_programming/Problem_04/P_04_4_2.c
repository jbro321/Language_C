#include <stdio.h>

int main(void)
{
    int num = 3;

    num = num << 3;
    num = num >> 2;

    printf("%d", num);

return 0;
}