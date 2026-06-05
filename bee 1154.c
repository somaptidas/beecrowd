#include<stdio.h>
int main()
{
    float n;
    float sum=0;
    float count=0;
    while(1){
        scanf("%f",&n);
        if(n>0){
            sum=sum+n;
        count=count+1;
        }


        if(n<0){
            break;
        }
    }




    float avg=sum/count;
    printf("%.2f\n",avg);

}
