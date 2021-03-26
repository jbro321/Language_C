#include <stdio.h>

int main(void)
{
    int num;
    int i=0;

    printf("How many times do you want to print? ");
    scanf("%d", &num);

    while(i<num)
    {
        printf("Hello World!\n");
        i++;
    }
    
    return 0;
}