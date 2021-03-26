#include <stdio.h>

int main(void)
{
    int i, j;
    int result=0;

    for (i = 2; i < 10; i+=2)
    {
        for (j = 1; i >= j; j++)
        {    
            if (i < j)
                break;
            result = i * j;
            printf("%d x %d = %d\n", i, j, result);
        }
        j=0;
    }

    return 0;
}

/*
#include <stdio.h>

int main(void)
{
    int i, j;
    int result=0;

    for (i = 2; i < 10; i=i+2)
    {
        for (j = 1; i >= j; j++)
        {
            result = i * j;
            printf("%d x %d = %d\n", i, j, result);            
        }
        j=0;
    }    

    return 0;
}
*/

/*
모범답안

#include <stdio.h>

int main(void)
{
    int i, j;
    for (i = 1; i < 10; i++)
    {
        if(i%2!=0)
            continue;
        
        for(j=1; j<10; j++)
        {
            if(i<j)
                break;
            printf("%dx%d=%d \n", i, j, i*j);
        }
        printf("\n");
    }    
    return 0;
}
*/