#include<stdio.h>
#include<conio.h>
void main()
{
float x,y,z;
int n,i;
clrscr();
x=0;
y=1;
printf("how many fibonaci number do yoy want to dispaly\n");
scanf("%d",&n);
if(n==1)
{
printf(" %d\t",x);
}
else if(n==2)
{
printf("%d\t%d\t",x,y);
}
else
{
printf("%d\t%d\t",x,y);
for (i=3;i<=n;i++)
{
	z=x+y;
	printf("%.f\t",z);
	x=y;
	y=z;
 }
}

getch();
}
