#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u' or c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U')
    {
        printf("VOWEL");
    }
    else
    {
        printf("CONSONANT");
    }
}