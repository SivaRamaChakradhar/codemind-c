#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c == 'V')
    {
        printf("Violet");
    }
    else if(c == 'I')
    {
        printf("Indigo");
    }
    else if(c == 'B')
    {
        printf("Blue");
    }
    else if(c == 'G')
    {
        printf("Green");
    }
    else if(c == 'Y')
    {
        printf("Yellow");
    }
    else if(c == 'O')
    {
        printf("orange");
    }
    else if(c == 'R')
    {
        printf("Red");
    }
    else
    { 
        printf("-1");
    }
}