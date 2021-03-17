#include <stdio.h>

int main(void)
{
    int num;
    int result;

    printf("Input number: ");
    scanf("%d", &num);
    printf("%d!", num);

    for (result = 1; num != 1; num--)
    {
        result *= num;
    }
    
    printf(" = %d", result);
    return 0;
}

/*

/모범답안

#include <stdio.h>

int main(void)
{
    int num, i;
    int result=1;

    printf("Input number: ");
    scanf("%d", &num);

    for (i = 1; i<=num; i++)
        result=result*i;
    
    printf("%d! = %d", num, result);
    return 0;
}

*/