// Your code here...
#include <stdio.h>
int main()
{
    int n,prod;
    scanf("%d",&n);
    for (int i=1;i<=10;i++)
    {
        prod=n*i;
        printf("\n%d x %d = %d",n,i,prod);
    }
    printf("\n");
    return 0;
}