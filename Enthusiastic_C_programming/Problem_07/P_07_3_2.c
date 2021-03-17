#include <stdio.h>

int main(void)
{
    int total=0, num=1;

    do
    {
        total += num*2;
        num++;
    } while (num*2<=100);
    
    printf("Total: %d", total);
    return 0;
}