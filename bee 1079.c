#include<stdio.h>
int main()
{
   int t;
   float a,b,c;
   float avg;
   scanf("%d",&t);
   float arr[3];
   int i,j;
   for(i=0;i<t;i++){
    for(j=0;j<3;j++){
        scanf("%.1f",&arr[j]);

    }
    avg=(arr[0]*2+arr[1]*3+arr[2]*5)/10;
    printf("%.1f\n",avg);

   }

    return 0;
}
