#include<stdio.h>
int pr(double a)
{double b;
if (a<=50)
b=4.31-(a-40)*(4.31-3.54)/10;
else b=3.54-(a-50)*(3.54-2.99)/10;
return(b);}
#include<math.h>
void main()
{double c,k,h,t2;
int i=0;
double t1=45;
do
{
c=2.86/pr(t1);
k=0.35*1.1547*1.1547*pow(12708.68,0.6)*pow(2.86,0.36)*pow(c,0.25);
h=0.996*k*0.662/0.019;
t2=62.5-27972.6*(1/h+0.000344);
t1=t2;
i=i++;}
while(i>=100);
printf("%f\n",t1);
}