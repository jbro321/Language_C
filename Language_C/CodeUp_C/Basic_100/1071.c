#include <stdio.h>

int main()
{
    int n;

 //레이블은 콜론(:)으로 끝내고, 일반적으로 들여쓰기를 하지 않는다.
reload:

    scanf("%d", &n);
    if(n!=0)
    {
        printf("%d\n", n);
        goto reload;
    }
    return 0;
}

/* 주석 토글 Shift+Alt+A

#include<stdio.h>

int main()
{
	int n;
        
        again:
	scanf("%d", &n);
	printf("%d\n", n);

	if(n != 0) 
		goto again;

	return 0;
} */
