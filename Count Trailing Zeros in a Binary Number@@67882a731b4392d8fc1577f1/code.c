// Your code here...
#include <stdio.h>
int main()
{
    int a,i=0;
    scanf("%d",&a);
    while (a!=0)
    {
        i++;
        a=a<<1;
    }
    printf("%d",32-i);
    return 0;
}