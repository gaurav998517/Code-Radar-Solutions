// Your code here...
#include <stdio.h>
int sum(int);
int main()
{
    int n,res;
    scanf("%d",&n);
    res=sum(n);
    printf("%d",res);
    return 0;
}
int sum(int x)
{
    if (x==0)
        return 0;
    else
        return x + sum(x-1);
}