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
    for(i=small+1;i<big;i++){
        if(i%5==2 || i%5==3){
            printf("%d\n",i);
        }
    }
    return 0;
}
