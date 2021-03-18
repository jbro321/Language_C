#include <stdio.h>

int main(void)
{
    int num1, num2;
    int sub;
    
    printf("Input two numbers\n");
    scanf("%d %d", &num1, &num2);
    
    sub = (num1 < num2) ? num2 - num1 : num1 - num2;
    printf("The result is %d", sub);

    return 0;
}