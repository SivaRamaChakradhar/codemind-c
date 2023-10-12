#include<stdio.h>
int main()
{
    float Height;
    scanf("%f",&Height);
    if(Height<150)
    {
        printf("The person is Dwarf.");
    }
    else if(Height>150 && Height<=165)
    {
        printf("The person is average heighted.");
    }
    else if(Height>165 && Height<=195)
    {
        printf("The person is taller.");
    }
    else
    {
        printf("Abnormal height.");
    }
}