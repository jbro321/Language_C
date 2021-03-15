#include <stdio.h>

int main(void)
{
    int num1 = 10;
    int num2 = 0xA; //0x로 시작하면 16진수
    int num3 = 012; //0으로 시작하면 8진수

    printf("Decimal 10 in decimal number is %d\n", num1); //표현형이 10진수는 %d
    printf("Decimal 10 in hexadecimal number is %x\n", num2); //표현형이 16진수는 %x
    printf("Decimal 10 in octal number is %o\n", num3); //표현형이 8진수는 %o
    
    printf("Hexadecimal number 0xA is 10 in decimal\n");
    printf("Octal number 012 is 10 in decimal");

    printf("Decimal 5 ~ 18 in octal refers to\n\
Decimal = octal\n\
5 = 5\n\
6 = 6\n\
7 = 7\n\
8 = 10\n\
9 = 11\n\
10 = 12\n\
11 = 13\n\
12 = 14\n\
13 = 15\n\
14 = 16\n\
15 = 17\n\
16 = 20\n\
17 = 21\n\
18 = 22");

return 0;
}