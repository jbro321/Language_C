#include <stdio.h>

int main(void)
{
    char data[2001];
    fgets(data, 2000, stdin);
    printf("%s", data);
    return 0;
}

/*
char data[2001];
fgets(data, 2000, stdin);
printf("%s", data);

위와 같이 실행하면 공백이 포함된 문장을 키보드(stdin)로 입력받아
최대 2000자까지 data[ ] 공간에 저장하고 출력할 수 있다.

%s 는 문자열(string, 실로 연결된 문자들. 문장)로 출력하라는 의미이다.

참고
fgets( ) 를 사용하면 공백문자가 포함되어잇는 문장을 입력받아 저장할 수 있다.
만약, 아래처럼
scanf("%s", ... ) 를 이용해 문장을 입력받으면, 첫 번째 단어까지만 저장된다.

fgets는 엔터키 포함 공백 입력 가능
gets 엔터키 미포함 공백 입력 가능
*/