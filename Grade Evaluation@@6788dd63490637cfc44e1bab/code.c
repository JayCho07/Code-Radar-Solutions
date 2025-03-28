// Your code here...
#include <stdio.h>
int grade(char c)
{
    switch(c)
    {
        case 'A':
        printf("Excellent");
        break;
        case 'B':
        printf("Good");
        break;
        case 'C':
        printf("Average");
        break;
        case 'D':
        printf("Below Average");
        break;
        case 'F':
        printf("Fail");
        break;
        default:
        printf("Invalid Grade");
        break;
    }
}

int main()
{
    char c;
    scanf("%c", &c);
    grade(c);
}