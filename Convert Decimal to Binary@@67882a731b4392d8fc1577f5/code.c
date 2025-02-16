// Your code here...
#include <stdio.h>
int main()
{
    int n,i,flag;
    for (i=31;i>=0;i--)
    {
        if (n & (1<<i))
            flag=1;
        if (flag)
            printf("%d",(n & (1<<n)?1:0));
    }
    if (!flag)
        printf("0");
    return 0;
}