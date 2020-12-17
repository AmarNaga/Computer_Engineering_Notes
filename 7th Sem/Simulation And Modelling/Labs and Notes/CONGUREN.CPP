#include<stdio.h>
#include<conio.h>
#include<math.h>
void congurential(float,float,float,float);
void main()
{
float x,a,b,m;
int n;
clrscr();
printf("enter the value of seed\n");
scanf("%f",&x);
printf("which method do u want\n1.Multiplicative\n2.additative\n3.Mixed method\n");
scanf("%d",&n);
if(n==1)
{
printf("enter the value of a,m\n");
scanf("%f%f",&a,&m);

congurential(a,x,0.0,m);
}
else if(n==2)
{
    printf("enter the value of b,m\n");
    scanf("%f%f",&b,&m);
    congurential(1.0,x,b,m);
}
else if(n==3)
{
	printf("enter the value of a,b,m\n");
	scanf("%f%f%f",&a,&b,&m);
	congurential(a,x,b,m);
}
else
{
printf("wrong choice\n");
}
getch();
}
void congurential(float a,float x,float b,float m)
{
int n,i,k;
float x0;
printf("how many random number do u want\n");
scanf("%d",&n);
x0=x;
printf("\t   X ||\t Random Number\n");
for(i=0;i<n;i++)
{
k=((a*x0)+b)/m;
x=(a*x0)+b-k*m;

printf("\t %.2f||\t%.2f\n",x0,x);
x0=x;
}
}