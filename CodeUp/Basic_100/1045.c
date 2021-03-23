#include <stdio.h>

int main(void)
{
    long long int a, b;

    scanf("%lld %lld", &a, &b);
    printf("%lld\n", a+b);
    printf("%lld\n", a-b);
    printf("%lld\n", a*b);
    printf("%lld\n", a/b);
    printf("%lld\n", a%b);
    printf("%.2f\n", (float)a/(float)b);

    return 0;
}

/*
모범답안

#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a+b);
    printf("%d\n", a-b);
    printf("%d\n", a*b);
    printf("%d\n", a/b);
    printf("%d\n", a%b);
    printf("%.2lf", (double)a/b);
    return 0;
}
*/