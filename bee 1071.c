#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int i;
    int sum=0;
    for(i=b+1;i<a;i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    printf("%d",sum);
    return 0;
}
