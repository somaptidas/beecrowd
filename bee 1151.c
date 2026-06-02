#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int a[50];
    a[0]=0;
    a[1]=1;
    if(n>0 && n<46){
        for(i=2;i<n;i++){

            a[i]=a[i-1]+a[i-2];
        }
    }
    for(i=0;i<n;i++){
            if(i<=n-2){
                printf("%d ",a[i]);
            }
            else {
                printf("%d\n",a[i]);
            }

    }

    return 0;
}
