#include<stdio.h>
int main()
{
    float Basic_Salary,HRA,DA,PF,Gross_Salary;
    scanf("%f%f%f",&Basic_Salary,&HRA,&DA);
    PF=(12/100.0)*Basic_Salary;
    Gross_Salary=PF+HRA+DA+Basic_Salary;
    printf("%.2f
",PF);
    printf("%.2f",Gross_Salary);
}