
#include<stdio.h>
int main()
{
    float n;
    int count=0;
    float sum=0;
    while (1){
        scanf("%f",&n);
        if(n<0 || n>10){
             printf("nota invalida\n");
        }
        else{
            sum=sum+n;
            count=count+1;

        }





        if(count==2){
            break;
        }
    }
    printf("media = %.2f\n",sum/count);

}
