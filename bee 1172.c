#include<stdio.h>
int main()
{
    int arr[10];
    int i;
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        if(arr[i]==0 || arr[i]<0){
            printf("X[%d] = 1\n",i);
        }
        else{
            printf("X[%d] = %d\n",i,arr[i]);
        }
    }

    }

