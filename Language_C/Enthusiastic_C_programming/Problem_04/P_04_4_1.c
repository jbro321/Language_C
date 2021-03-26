#include <stdio.h>

int main(void)
{
    int num1;

    printf("Input number: ");
    scanf("%d", &num1);

    int num2 = ~num1 +1;

    printf("%d", num2);

return 0;
}