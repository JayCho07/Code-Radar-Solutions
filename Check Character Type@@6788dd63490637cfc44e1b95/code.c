// Your code here...
#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);

    if (c>='a' && c<='z')
    {
        if (c=='a'||c=='e'||c=='i'||c=='O'||c=='u')
        {
            printf("Vowel");
        }
        else 
        {
            printf("Consonant");
        }
    }
    else if (c>='1' && c<='9')
    {
        printf("Digit");
    }
    else 
    {
        printf("Special Character");
    }
}