#include <stdio.h>

int main(void)
{
    int x1, y1;
    int x2, y2;
    int result;

    printf("Calculate rectangular area\n");
    printf("Input lower left x,y coordinates: ");
    scanf("%d %d", &x1, &y1);
    printf("Input upper right x,y coordinates: ");
    scanf("%d %d", &x2, &y2);
    
    result = (x2 - x1) * (y2 - y1);

    printf("Result: %d\n", result);

    return 0;
}