// Your code here...
#include <stdio.h>
int main()
{
    int a,msb;
    scanf("%d",&a);
    msb=1<<31;
    if (a&msb)
        printf("Set");
    else
        printf("Not Set");
    return 0;
}