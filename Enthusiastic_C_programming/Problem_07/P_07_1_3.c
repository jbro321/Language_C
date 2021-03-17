#include <stdio.h>

int main(void)
{
    int num=1;
    int total=0;

    printf("Add up system\n");
    printf("Write 0 to quit\n");
    
    while(num!=0)
    {
        printf("Input number: ");
        scanf("%d", &num);
        total += num;
        printf("Current sum is %d\n", total);    
    }
    
    printf("The total sum is : %d\n", total);

    return 0;
}