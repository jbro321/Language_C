#include <stdio.h>

int main(void)
{
    int num=0;
    int i=0;
    int total=0;
    
    printf("Calculate total\n");
    printf("Write 5 integer numbers\n");
    
    while(i<5)
    {
        printf("%d. number: ", i+1);
        scanf("%d", &num);
        while(num<1)
        {
            printf("Put the number over 0\n");
            printf("%d. number: ", i+1);
            scanf("%d", &num);
        }
        
        total += num;
        num=0;
        i++;
    }

    printf("The total is : %d", total);

    return 0;
}

/*
모범답안

#include <stdio.h>

int main(void)
{
    int sum=0, num=0, i=0;
    
    while(i<5)
    {
        while(num<=0)
        {
            printf("Write the number over 0 (%d st): ", i+1);
            scanf("%d", &num);
        }
        sum+=num;
        num=0;
        i++;
    }
    printf("The total is : %d \n", sum);
    return 0;
}
*/