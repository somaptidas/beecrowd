#include<stdio.h>
int main()
{
    float n;
    int i;
    int count=0;
    float sum=0;
    float avg;
    for(i=1;i<=6;i++){
        scanf("%f",&n);


    if(n>0){
        count=count + 1;
        sum=sum +n;
    }

    }
    avg=sum/count;

    printf("%d valores positivos\n",count);
    printf("%.1f\n",avg);

    return 0;

}
