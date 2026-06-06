
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    double d=(b*b)-(4*a*c);
    double R1,R2;
    R1= ((-b) + sqrt(d))/(2*a);
    R2= ((-b) - sqrt(d))/(2*a);
    //printf("%.2lf\n",d);
    //printf("%.2lf\n",sqrt(d));

    if(a==0 || d<0){
        printf("Impossivel calcular\n");
    }
    else{

        printf("R1 = %.5lf\nR2 = %.5lf\n",R1,R2);
    }

}
