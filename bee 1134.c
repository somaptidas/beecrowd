#include<stdio.h>
int main()
{
    int n;
    int alcohol,gasoline,diesel;
    alcohol=0;
    gasoline=0;
    diesel=0;
    while(n!=4){
        scanf("%d",&n);
        if(n==1){
            alcohol+=1;
        }
        if(n==2){
            gasoline+=1;
        }
        if(n==3){
            diesel+=1;
        }
        if(n==4){
            break;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",alcohol);
    printf("Gasolina: %d\n",gasoline);
    printf("Diesel: %d\n",diesel);

    return 0;
}
