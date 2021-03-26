#include <stdio.h>

int main(void)
{
    int num1;
    double num2;

    printf("Usage of \"Printf\" and \"Scanf\"\n");

    //%-10s는 10개의 필드칸 확보하고 왼쪽 정렬
    //%10s는 10개의 필드칸 확보하고 오른쪽 정렬
    printf("%-10s %10s\n", "Printf", "Scanf");

    printf("Input real number: ");
    scanf("%lf", &num2);
    
    //%09.2f는 총 9칸 확보하고, 나머지는 0으로 채우고, 소수점은 2째자리까지
    printf("The number is %09.2f\n", num2);

    printf("Input integer number: ");
    scanf("%d", &num1);
    printf("The number is %d\n", num1);

    return 0;
}