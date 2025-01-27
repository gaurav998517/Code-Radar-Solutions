#include <stdio.h>
int main()
{
    char a,i,ctr=0;
    scanf("%c",&a);
    for (i=65;i<=90;i++)
    {
        ctr++;
    }
    
    if (ctr==0)
        printf("Lowercase");
    else
        printf("Uppercase");
        
    return 0;
}