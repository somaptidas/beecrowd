#include<stdio.h>
int main()
{
    int n,t,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    int count1=0;
    for(i=0;i<n;i++){
        if(arr[i]>=10 && arr[i]<=20){
            count++;
        }
        else{
            count1++;
        }
    }
    printf("%d in\n",count);
    printf("%d out\n",count1);

    return 0;
}

