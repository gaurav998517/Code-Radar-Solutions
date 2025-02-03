#include <stdio.h>
int main()
{
    char a[90];
    int c;
    char b[90];
    scanf("%s %d %s",a,&c,b);
    printf("Name: %s",a);
    printf("\nAge: %d",c);
    printf("\nHobby: %s",b);
    return 0;
}