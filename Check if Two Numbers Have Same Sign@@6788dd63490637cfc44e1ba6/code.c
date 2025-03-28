// Your code here...
#include <stdio.h>
int sign(int a, int b)
{
    if (a>0 && b>0)
    {
        printf("Same Sign");
    }
}

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);

    sign(a,b);
}