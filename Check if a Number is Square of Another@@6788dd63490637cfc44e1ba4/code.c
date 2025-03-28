// Your code here...
#include <stdio.h>
int square(int a, int b)
{
    if (b*b == a)
    {
        printf("Yes");
    }
    else 
    {
        printf("No");
    }
}

int main()
{
    int a,b;
    scanf("%d %d", &a,&b);

    square(a,b);
}