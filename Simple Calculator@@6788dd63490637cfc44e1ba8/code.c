#include <stdio.h>
int main()
{
    int a,b,c;
    char choice;
    scanf("%d %d %c",&a,&b,&choice);
    switch(choice)
    {
        case '+':
        c=a+b;
        printf("%d",c);
        break;
        case '-':
        c=a-b;
        printf("%d",c);
        break;
        case '*':
        c=(a*b);
        printf("%d",c);
        break;
        case '/':
        c=a/b;
        printf("%d",c);
        break;
        default:
            printf("error");

    }
    return 0;
}