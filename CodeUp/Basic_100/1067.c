#include <stdio.h>

int main(void)
{
    int a;

    scanf("%d", &a);
    if(a<0)
    {
        printf("%s\n", "minus");
        if(a%2==0)
            printf("%s\n", "even");
        else
            printf("%s\n", "odd");
    }
    else
    {
        printf("%s\n", "plus");
        if(a%2==0)
            printf("%s\n", "even");
        else
            printf("%s\n", "odd");
    }
    return 0;
}

/* #include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    
    if(a > 0) printf("plus\n");
    else printf("minus\n");
    
    if(a%2 == 0) printf("even\n");
    else printf("odd\n");
   
    return 0;
} */