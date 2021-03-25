#include <stdio.h>

int main()
{
    char a;
    scanf("%s", &a);
    
    switch(a)
    {
    case 'A':
        printf("best!!!\n");
        break;
    case 'B':
        printf("good!!\n");
        break;
    case 'C':
        printf("run!\n");
        break;
    case 'D':
        printf("slowly~\n");
        break;

    default:
        printf("what?");
        break;
    }
    return 0;
}