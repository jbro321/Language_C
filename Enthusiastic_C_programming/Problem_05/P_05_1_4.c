#include <stdio.h>

int main(void)
{
    int num;

    printf("Input integer: ");
    scanf("%d", &num);
    printf("Integer %d represents %c in ASCII \n", num, num);
    
    return 0;
}