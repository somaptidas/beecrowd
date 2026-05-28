#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int i;
    float x,y;
    for(i=0;i<t;i++){
        scanf("%f%f",&x,&y);
        if(y==0){
            printf("divisao impossivel\n");
        }
        else {
            printf("%.1f\n",x/y);
        }
    }
    return 0;

}
