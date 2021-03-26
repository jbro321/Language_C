#include <stdio.h>

int main(void)
{
    int start, end;
    int result;

    printf("Input start and end number: ");
    scanf("%d %d", &start, &end);

    for (result = 0; start <= end; start++)
    {
        result+=start;
    }
    
    printf("Total: %d", result);
    return 0;
}