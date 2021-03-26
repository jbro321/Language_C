#include <stdio.h>

int main(void)
{
    int num;
    int result;
    
    printf("Input 1 numbers: ");
    scanf("%d", &num);

    result = num * num;

    printf("%d^2 = %d\n", num, result);
    
return 0;
}