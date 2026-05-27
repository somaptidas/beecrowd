#include<stdio.h>
int main()
{
    float n;
    float money_earned,new_salary;
    int in_parcentage;
    scanf("%.2f",&n);
    if(n>=0 && n<=400.00){
        money_earned=(n*15)/100;
        new_salary=money_earned+n;
        in_parcentage=(15*100)/100;
        printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",money_earned);
        printf("Em percentual: %d %%\n",in_parcentage);

    }
    else if( n>=400.01 && n<=800.00){
        money_earned=(n*12)/100;
        new_salary=money_earned+n;
        in_parcentage=(12*100)/100;
       // printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n",new_salary,money_earned,in_parcentage);
       printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",money_earned);
        printf("Em percentual: %d %%\n",in_parcentage);

    }
   else if(n>=800.01 && n<=1200.00 ){
        money_earned=(n*10)/100;
        new_salary=money_earned+n;
        in_parcentage=(10*100)/100;
       // printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n",new_salary,money_earned,in_parcentage);
        printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",money_earned);
        printf("Em percentual: %d %%\n",in_parcentage);

    }
    else if( n>=1200.01 && n<=2000.00){
        money_earned=(n*7)/100;
        new_salary=money_earned+n;
        in_parcentage=(7*100)/100;
       // printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n",new_salary,money_earned,in_parcentage);
       printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",money_earned);
        printf("Em percentual: %d %%\n",in_parcentage);

    }
    else if(n>2000.00 ){
        money_earned=(n*4)/100;
        new_salary=money_earned+n;
        in_parcentage=(4*100)/100;
        //printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n",new_salary,money_earned,in_parcentage);
        printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",money_earned);
        printf("Em percentual: %d %%\n",in_parcentage);

    }

    return 0;
}

