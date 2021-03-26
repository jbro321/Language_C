#include <stdio.h>

int main(void)
{
    int cur=2;
    int is=0;

    while (cur<10)
    {
        is=1;

        do
        {
            printf("%dx%d=%d \n", cur, is, cur*is);
            is++;
        }while (is<10);
        cur++;
    }
    
    return 0;
}