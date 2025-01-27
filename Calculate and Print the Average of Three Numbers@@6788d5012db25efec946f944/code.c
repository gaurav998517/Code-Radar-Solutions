#include <stdio.h>
int main()
{
    int a,b,c,d;
    float avg;
    scanf("%d %d %d",&a,&b,&c);
    d=a+b+c;
    avg=d/3.0;
    printf("Average: %.2f",avg);

    return 0;
}