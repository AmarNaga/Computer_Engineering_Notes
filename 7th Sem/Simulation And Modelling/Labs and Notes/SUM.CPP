#include<stdio.h>
#include<conio.h>
void main()
{
float x,y,sum;
int a,b;
clrscr();
sum=0;
printf("enter the largest value\n");
scanf("%f",&x);
printf("enter the smallest value\n");
scanf("%f",&y);
a=x-y;
for(b=0;b<=a;b++)
{
sum=sum+y+b;
}
printf("the sum is %.2f",sum);
getch();
}
