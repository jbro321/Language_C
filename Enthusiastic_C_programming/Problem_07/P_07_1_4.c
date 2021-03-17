#include <stdio.h>

int main(void)
{
    int dan=0, num=1;
    printf("Which gugudan? ");
    scanf("%d", &dan);

    while(num<10)
    {
        printf("%dx%d=%d \n", dan, (10-num), dan*(10-num));
        num++;
    }

    return 0;
}

/*
모범답안

#include <stdio.h>

int main(void)
{
    int dan=0, num=9;
    printf("Which gugudan? ");
    scanf("%d", &dan);

    while(num>0)
    {
        printf("%dx%d=%d \n", dan, num, dan*num);
        num--;
    }

    return 0;
}

*/