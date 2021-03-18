#include <stdio.h>

int main(void)
{
    int num;
    
    for (num = 1; num < 100; num++)
    {
        if (num %7 == 0 || num%9 == 0)
        {
            printf("Multiple of 7 or 9 : %d \n", num);
        }
    }
    
    return 0;
}