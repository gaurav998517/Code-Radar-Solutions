#include <stdio.h>
int main()
{
    char a,i,ctr=0,dc=0;
    scanf("%c",&a);
    for (i=65;i<=90;i++)
    {
        ctr++;
    }
    for (i=97;i<=122;i++)
    {
        dc++;
    }
    
    if (dc!=0)
        printf("Lowercase");
    else if (ctr!=0)
        printf("Uppercase");
        
    return 0;
}