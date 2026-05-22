#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    if(n>1 && n<1000){
        for(i=1;i<=10;i++){
            printf("%d x %d = %d\n",i,n,i*n);
        }
    }
}
