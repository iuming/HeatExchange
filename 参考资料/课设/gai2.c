#include<stdio.h>
double pr(double a)
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
c=2.882/pr(t1);
k=0.35*pow(1.1547,0.2)*pow(25315.96077,0.6)*pow(2.882,0.36)*pow(c,0.25);
h=0.977*k*0.6553/0.025;
t2=62.5-23383.35851*(1/h+0.000344);
t1=t2;
i=i++;}
while(i<=30);
c=pr(t1);
printf("%f\n",t1);
printf("%f\n",c);
}