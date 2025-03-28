// Your code here...
#include <stdio.h>
int light(char c)
{
    switch(c)
    {
        case 'R':
        printf("Stop");
        break;
        case 'G':
        printf("Go");
        break;
        case 'Y':
        printf("Slow Down");
        break;
        default:
        printf("Invalid input");
        break;
    }
}
int main()
{
    char c;
    scanf("%c", &c);
    light(c);
}