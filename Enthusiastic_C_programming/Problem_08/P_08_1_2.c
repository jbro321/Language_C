#include <stdio.h>

int main(void)
{
    int num1, num2;
    
    printf("Input two numbers\n");
    scanf("%d %d", &num1, &num2);
    
    if (num1 < num2)
        printf("Result is %d", num2-num1);
    else
        printf("Result is %d", num1-num2);
    
    return 0;
}