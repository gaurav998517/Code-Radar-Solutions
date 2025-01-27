#include <stdio.h>
int main()
{
    float a,b;
    int c;
    char choice;
    scanf("%f %f %c",&a,&b,&choice);
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