// Your code here...
#include <stdio.h>
int elig(int age, int citi)
{
    if (age>=18 && citi==1)
    {
        printf("Eligible");
    }
    else
    {
        printf("Not eligible");
    }
}

int main()
{
    int age, citi;
    scanf("%d %d", &age, &citi);

    elig(age,citi);
}