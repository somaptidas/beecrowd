#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    float total;
    if(x==1){
        total=y*4.00;
    }
    if(x==2){
        total=y*4.50;
    }
    if(x==3){
        total=y*5.00;
    }
    if(x==4){
        total=y*2.00;
    }
    if(x==5){
        total=y*1.50;
    }
    printf("Total: R$ %.2f\n",total);
    return 0;

}
