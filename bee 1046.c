#include<stdio.h>
int main()
{
    int start,end;
    int duration;
    scanf("%d%d",&start,&end);
    if(start>end){
        duration=24-start+end;
    }
    if(start<end){
        duration=end-start;
    }
    if(start==end){
        duration=24;
    }
    printf("O JOGO DUROU %d HORA(S)\n",duration);
    return 0;
}

