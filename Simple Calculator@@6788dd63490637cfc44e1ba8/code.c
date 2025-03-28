// Your code here...
#include <stdio.h>
int calc(int a, int b, char c)
{
    switch(c)
    {
        case '+':
        printf("%d", a+b);
        break;
        case '-':
        printf("%d", a-b);
        break;
        case '*':
        printf("%d", a*b);
        break;
        case '/':
        printf("%d", a/b);
        break;
        default:
        printf("Error");
        break;
    }
}

int main()
{
    int a,b;
    char c;
    scanf("%d %d %c", &a,&b,&c);

    calc(a,b,c);
}