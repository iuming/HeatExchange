#include<stdio.h>
double pr(double a)
{double b;
if (a<=50)
b=4.31-(a-40)*(4.31-3.54)/10;
else b=3.54-(a-50)*(3.54-2.99)/10;
return(b);}
#include<math.h>
void main()
{double c,k,h,t2,i;
double t1=55;
do

c=3.0018/pr(t1);
k=0.35*1.1547*1.1547*pow(31855.43656,0.6)*pow(3.0018,0.36)*pow(c,0.25);
h=0.994*k*0.6508/0.019;
t2=60-24076.66327*(1/h+0.000344);
i=i+1;
t1=t2;

while(i<100);
printf("%f\n",t1);
}
