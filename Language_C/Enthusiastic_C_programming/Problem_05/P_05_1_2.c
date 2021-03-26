#include <stdio.h>

int main(void)
{
    double num1, num2;

    printf("Input two real numbers: ");
    scanf("%lf %lf", &num1, &num2);
    
    printf("num1 + num2 = %f\n", num1 + num2);
    printf("num1 - num2 = %f\n", num1 - num2);
    printf("num1 * num2 = %f\n", num1 * num2);
    printf("num1 / num2 = %f\n", num1 / num2);
    
    // printf("num1 %% num2 = %f\n", num1 % num2);
    // 실수에서는 % 연산, 나머지를 구할 수 없다.
    // 대안 : printf("num1 %% num2 = %d\n", (int)num1 % (int)num2);

    return 0;
}