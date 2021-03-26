#include <stdio.h>

int main(void)
{
    int num=0;
    int i_num=0;
    int i=0;
    int total=0;

    printf("Calculate mean\n");
    printf("How many number? ");
    scanf("%d", &num);

    while(i<num)
    {
        printf("Input number: ");
        scanf("%d", &i_num);

        total = total + i_num;
        i++;
    }

    printf("Mean is : %f", (double)total/num);

    return 0;
}


/*
모범답안

#include <stdio.h>

int main(void)
{
    int total=0, i=0;
    int num, input;

    printf("Calculate mean\n");
    printf("How many number? ");
    scanf("%d", &num);

    while(i++<num)
    {
        printf("Input number: ");
        scanf("%d", &input);
        total += input;
    }

    printf("Mean is : %f", (double)total/num);
    return 0;
}

*/