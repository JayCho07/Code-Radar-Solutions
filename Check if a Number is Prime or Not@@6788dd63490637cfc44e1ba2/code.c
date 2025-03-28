// Your code here...
#include <stdio.h>
int prime(int n)
{
    int i;
    for (i=2; i<n; i++)
    {
        if (n%i==0)
        {
            printf("Not Prime");
            break;
        }
    }

    if (i==n)
    {
        printf("Prime");
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    prime(n);
}