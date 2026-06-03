#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    if(n>0 && n<=10000000){

        for(i=1;i<=n;i++){
        if(i<n){
            printf("Ho ");
        }
        else{
            printf("Ho!\n");
        }
    }
    }

    return 0;

}
