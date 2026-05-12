#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    if(n>5 && n<2000){
        for(i=1;i<=n;i+=1){
                if(i%2==0){
                    printf("%d^2 = %d\n",i,i*i);
                }

        }
    }
    return 0;
}
