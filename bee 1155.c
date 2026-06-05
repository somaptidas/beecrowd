
#include<stdio.h>
int main()
{
    float one=1;
    float i;
    float sum=0;
    for(i=1;i<=100;i++){
        sum=sum+(one/i);
    }
    printf("%.2f\n",sum);

    return 0;
}
