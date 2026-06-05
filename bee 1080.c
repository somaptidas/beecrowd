#include<stdio.h>
int main()
{
    int arr[100];
    int i;
    int highest,pos;
    for(i=0;i<100;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<100;i++){
        if(arr[i]>arr[0]){
           // printf("%d",arr[i]);
            highest=arr[i];
            pos=i+1;
        }
    }
    printf("%d\n%d\n",highest,pos);

    return 0;
}
