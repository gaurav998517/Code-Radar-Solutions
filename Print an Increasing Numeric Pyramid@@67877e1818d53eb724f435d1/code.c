// Your code here...
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        int a=i-1;
        for (int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for (int k=1;k<=i-1;k++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}