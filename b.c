#include<stdio.h>
int main()
{

int t,n;
scanf("%d",&t);
int i;
for(i=0;i<t;i++){
    scanf("%d",&n);
}
for(i=0;i<t;i++){
    printf("%d",n);
    for(i=1;i<n;i+=2){
        printf("%d",i);
    }
}

return 0;
}
