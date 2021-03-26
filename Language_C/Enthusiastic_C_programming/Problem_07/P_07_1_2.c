#include <stdio.h>

int main(void)
{
    int num=0;
    int mul=0;
    int j=1;

    printf("\nMultiple of x operation system\n\n");
    printf("Which number do you want to multiply? ");
    scanf("%d", &mul);

    printf("How many times do you want to print? ");
    scanf("%d", &num);

    while(j<=num)
    {
        printf("%d\n", mul*j);
        j++;
    }
    
    return 0;
}

/*
모범답안

#include <stdio.h>

int main(void)
{
    int num=0, cnt=0;
    printf("배수의 갯수:");
    scanf("%d", &num);

    while(cnt++<num)
        printf("%d ", 3*cnt);
    return 0;
}

*/