#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int i;
    if(x>1 && x<20 && y<100000 && x<y){
        for(i=1;i<=y;i++){
                if(i%x==0){
                    printf("%d\n",i);
                }
                else {
                    printf("%d ",i);
                }


        }
    }
   // printf("\n");
}
