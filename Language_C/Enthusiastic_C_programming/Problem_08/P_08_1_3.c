#include <stdio.h>

int main(void)
{
    int kor, eng, math;
    double avg;
    
    printf("Input Korean, English, Math scores\n");
    scanf("%d %d %d", &kor, &eng, &math);

    avg = (kor + eng + math )/3.0;
    printf("The average is %f\n", avg);

    if (avg >= 90.0)
        printf("GPA is A");
    else if(avg >= 80.0)
        printf("GPA is B");
    else if(avg >= 70.0)
        printf("GPA is C");
    else if(avg >= 50.0)
        printf("GPA is D");
    else
        printf("GPA is F");

    return 0;
}