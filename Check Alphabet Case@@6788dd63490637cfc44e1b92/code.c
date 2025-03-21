// Your code here...
#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);

    switch(c)
    {
        case 'A' ... 'Z':
        printf("Uppercase");
        break;

        case 'a'...'z':
        printf("Lowercase");
        break;

        default:
        printf("Not an alphabet");
        break;
    }
}