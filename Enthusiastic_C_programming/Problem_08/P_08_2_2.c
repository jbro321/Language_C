#include <stdio.h>

int main(void)
{
    int A, Z;

    printf("  A Z\n+ Z A\n-----\n  9 9\n\n");
    printf("Figuring the number that satisfy above equation\n\n");

    for (A = 0; A < 10; A++)
    {
        Z = 9 - A;
        printf("  %d %d\n+ %d %d\n-----\n  %d %d \n\n", A, Z, Z, A, A+Z, Z+A);
    }

    return 0;
}

/*
모범답안

#include <stdio.h>

int main(void)
{
    int A, Z;
    int result;
    for (A = 0; A < 10; A++)
    {
        for (Z = 0; Z < 10; Z++)
        {
            if(A==Z)
                continue;
            result=(A*10+Z)+(Z*10+A);
            if(result==99)
                printf("%d%d+%d%d=%d \n", A, Z, Z, A, result);
        }
    }
    return 0;
}
*/