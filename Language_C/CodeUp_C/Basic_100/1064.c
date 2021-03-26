#include <stdio.h>

int main(void)
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    //3항 연산자 ?를 이용하여 제일 작은 수 출력
    printf("%d\n", (a<b ? a:b)<c ? (a<b ? a:b):c);
    return 0;
}