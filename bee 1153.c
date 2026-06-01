#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int fact=1;
    if(n>0 && n<13){
        for(i=n;i>0;i--){
            fact=fact * i;
        }
    }
    printf("%d\n",fact);

    return 0;
}
