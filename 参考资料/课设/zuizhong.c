#include<stdio.h>
#include<math.h>
double pr(double a)
{
    double b;
    if (a<=50)
        b=4.31-(a-40)*(4.31-3.54)/10;
    else 
        b=3.54-(a-50)*(3.54-2.99)/10;
    return(b);
}
int main()
{
    double c,k,h,t2,i=0;
    double t1=55;
    do
    {
        c=3.0018/pr(t1);
        k=0.35* pow(1.1547,0.2)*pow(20816.91993,0.6)*pow(3.0018,0.36)*pow(c,0.25);
        h=0.982*k*0.6508/0.025;
        t2=60-21056.59464*(1/h+0.000344);
        i=i+1;
        t1=t2;
    }while(i<20);
    printf("%f\n",t1);
    return 0;
}
