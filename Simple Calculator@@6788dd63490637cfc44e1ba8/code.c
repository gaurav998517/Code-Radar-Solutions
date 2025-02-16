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
        if (a>b){
            c=a-b;
            printf("%d",c);
        }
        else
        {
            c=b-a;
            printf("%d",c);
        }
        break;

        printf("%d",c);
        break;
        case '*':
        c=(a*b);
        printf("%d",c);
        break;
        case '/':
        if (b>0)
        {
        c=a/b;
        printf("%d",c);
        break;
        }
        else
            printf("error");
            break;
        default:
            printf("error");

    }
    return 0;
}