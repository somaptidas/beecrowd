#include<stdio.h>
int main()
{
    char name[20];
    scanf("%s",name);
    double salary,total_value_sold;
    scanf("%lf%lf",&salary,&total_value_sold);
    double final_salary=(total_value_sold*15/100)+salary;
    printf("TOTAL = R$ %.2lf\n",final_salary);
    return 0;
}
