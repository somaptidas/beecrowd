#include<stdio.h>
int main()
{
    float arr[6];
    int i;
    for(i=0;i<6;i++){
        scanf("%f",&arr[i]);
    }
    int count=0;
    for(i=0;i<6;i++){
        if(arr[i]>0){
            count=count+1;
        }
    }
    printf("%d valores positivos\n",count);
    return 0;
}
