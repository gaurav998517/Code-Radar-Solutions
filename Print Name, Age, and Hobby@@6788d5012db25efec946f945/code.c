#include <stdio.h>
int main()
{
    char a[90];
    int c;
    char b[90];
    scanf("%s %d %s",a,&c,b);
    printf("\nName: %s",a);
    printf("\nAge: %d",b);
    printf("\nHobby: %s",c);
    return 0;
}