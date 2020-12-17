#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd,gm,n,m,k;
float x,y,ra,pa,ch;
gd=DETECT;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
arc(200,200,0,90,150);
setcolor(RED);
line(200,0,200,200);
line(200,200,400,200);
setcolor(GREEN);
rectangle(200,200,350,50);
printf("enter the N:");
scanf("%d",&n);
k=n;
m=0;
while(n!=0)
{ x=random(350);
  y=random(200);
  if(x<=350 && x>200 && y<200 && y>50)
  {
  ch=(x-200)*(x-200)+(y-200)*(y-200)-150*150;
   if(ch<=0)
   {
    setcolor(BLUE);
    circle(x,y,1);
    m=m+1;
   }
    setcolor(WHITE);
    circle(x,y,1);
    n=n-1;
  }

}
getch();
}
