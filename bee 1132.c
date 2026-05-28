#include<stdio.h>
int main()
{
    int x,y;
    int i;
    int small,big;
    scanf("%d%d",&x,&y);
    int sum=0;
    if(x<y){
         small=x;
         big=y;
    }
    else{
        small=y;
        big=x;
    }
    for(i=small;i<=big;i++){
        if((i%13)!=0){
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
