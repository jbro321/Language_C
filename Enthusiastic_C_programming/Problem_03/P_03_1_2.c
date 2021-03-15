#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    int result;
    
    printf("Input 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    result = num1 * num2 + num3;

    printf("%d * %d - %d = %d\n", num1, num2, num3, result);
    
return 0;
}