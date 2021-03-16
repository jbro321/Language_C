#include <stdio.h>

int main(void)
{
    char ch;

    printf("Input Alphabet: ");
    scanf("%c", &ch);
    printf("Alphabet %c represents %d in ASCII \n", ch, ch);
    
    return 0;
}