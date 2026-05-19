#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    int i;
    int arr[t];
    for(i=0;i<t;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<t;i++){
        if(arr[i]>0 && arr[i]%2==0){
            printf("EVEN POSITIVE\n");
        }
       else if(arr[i]<0 && arr[i]%2==0){
            printf("EVEN NEGATIVE\n");
        }
       else if(arr[i]>0 && arr[i]%2!=0){
            printf("ODD POSITIVE\n");
        }
        else if(arr[i]<0 && arr[i]%2!=0){
            printf("ODD NEGATIVE\n");
        }
        else if(arr[i]==0){
            printf("NULL\n");
        }
    }

    return 0;
}
