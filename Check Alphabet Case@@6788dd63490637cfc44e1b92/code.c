#include <stdio.h>
int main()
{
    char a,i,ctr=0,dc=0;
    scanf("%c",&a);
    if ((a>='A') && (a<='Z'))
        printf("Uppercase");
    else
        printf("Lowercase");
        
    return 0;
}