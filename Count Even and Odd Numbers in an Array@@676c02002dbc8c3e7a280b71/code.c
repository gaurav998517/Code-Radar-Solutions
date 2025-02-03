#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,even=0,odd=0;
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[i]%2==0)
            even+=1;
        else
            odd+=1;
    }
    printf("\n%d %d",even,odd);
    return 0;
}