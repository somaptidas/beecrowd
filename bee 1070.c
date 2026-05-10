
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    if(n%2==0){
        for(i=n+1;i<=n+11;i+=2){
        printf("%d\n",i);
    }
    }
    if(n%2!=0){
        for(i=n;i<=n+10;i+=2){
        printf("%d\n",i);
    }
    }



    return 0;
}
