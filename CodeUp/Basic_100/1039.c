#include <stdio.h>

int main(void)
{
    long int num1, num2;
    long long int sum;

    scanf("%ld %ld", &num1, &num2);
    sum = num1 + num2;

    printf("%lld\n", sum);

    return 0;
}