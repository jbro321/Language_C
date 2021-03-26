#include <stdio.h>

int main(void)
{
    int num;

    printf("Input number: ");
    scanf("%d", &num);

    switch (num/10)
    {
    case 0:
        printf("0 ~ 10");
        break;
    case 1:
        printf("10 ~ 20");
        break;
    case 2:
        printf("20 ~ 30");
        break;
    
    default:
        printf("over 30");
        break;
    }

    return 0;
}

/*
#include <stdio.h>

int main(void)
{
    int num;

    printf("Input number: ");
    scanf("%d", &num);

    if (0<=num && num<10)
        printf("0 ~ 10");
    else if(10<=num && num<20)
        printf("10 ~ 20");
    else if(20<=num && num<30)
        printf("20 ~ 30");
    else
        printf("more than 30");
    return 0;
}
*/