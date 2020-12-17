#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float x,y,z,a;
int k,w,b;
clrscr();
printf("enter the seed\n");
scanf("%f",&x);
printf("enter the number of iteration u want to do\n");
scanf("%d",&b);
printf("\tX    |  Square   |new X  |\n");
while(b!=0)
{
y=x*x;
k=y/1000000;
z=y-k*1000000;
w=z/100;
printf("\t%.0f |  %.0f | %d  |\n",x,y,w);
b=b-1;
x=w;
d}
getch();
}