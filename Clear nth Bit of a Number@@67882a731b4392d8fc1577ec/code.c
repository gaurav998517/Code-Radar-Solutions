// Your code here...
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c= a&~(1<<b);

    return 0;
}