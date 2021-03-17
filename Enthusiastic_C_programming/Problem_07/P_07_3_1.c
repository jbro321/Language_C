#include <stdio.h>

int main(void)
{
    int total=0, num=0;

    printf("Input integer(0 to quit): ");
    scanf("%d", &num);
    total += num;

    while(num!=0)
    {
        printf("Input integer(0 to quit): ");
        scanf("%d", &num);
        total += num;
    }

    printf("Total: %d \n", total);
    return 0;
}

/* version2

#include <stdio.h>

int main(void)
{
    int total=0, num=1;

    while(num!=0)
    {
        printf("Input integer(0 to quit): ");
        scanf("%d", &num);
        total += num;
    }

    printf("Total: %d \n", total);
    return 0;
}
*/

/* do~while version

#include <stdio.h>

int main(void)
{
    int total=0, num=0;

    do
    {
        printf("Input integer(0 to quit): ");
        scanf("%d", &num);
        total += num;
    } while (num!=0);
    printf("Total: %d \n", total);
    return 0;
}
*/