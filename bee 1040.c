#include<stdio.h>
int main()
{
    float a,b,c,d;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    float avg=(a*2+b*3+c*4+d)/10;
    printf("Media: %.1f\n",avg);
    if(avg>=7.0){
        printf("Aluno aprovado.\n");
    }
    if(avg<5.0){
        printf("Aluno reprovado.\n");
    }
    if(avg>=5.0 && avg<=6.9){
        printf("Aluno em exame.\n");
        float new_score;
        scanf("%f",&new_score);
        printf("Nota do exame: %.1f\n",new_score);
        float new_avg=(avg+new_score)/2;
        if(new_avg>=5.0){
            printf("Aluno aprovado.\n");
        }
        if(new_avg<=4.9){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",new_avg);
    }
    return 0;
}
