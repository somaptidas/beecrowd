#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++){
            //for(j=i;j<=i*i+1;j++)
        printf("%d %d %d\n",i,i*i,i*i*i);
        printf("%d %d %d\n",i,(i*i)+1,(i*i*i)+1);
    }



    return 0;
}

