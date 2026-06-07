#include<stdio.h>
int main()
{
    /*int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=4*n;j++){
            if(j%4==0){
                printf("PUM\n");
            }
            else{
                printf("%d",j);
            }
            j+=1;
        }
    }

    return 0;*/

    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n*4;i++){
        if(i%4==0){
            printf("PUM\n");
        }
        else{
            printf("%d ",i);
        }
    }
}
