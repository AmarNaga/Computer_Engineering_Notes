#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>
#include<dos.h>
int a,b,c;
void generate(int);
void main()
{
int gd,gm,i;
float x,y,z;


gd=DETECT;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
x=getmaxx();
y=getmaxy();
a=x/2;
b=y/2;
line(x/2,0,x/2,y);
line(0,y/2,x,y/2);

while(!kbhit())
{
generate(rand() % 100);
delay(100);
}
getch();
}
void generate(int x)
{

if(x>=0 && x<=25)
{
setcolor(RED);
pieslice(a,b,0,360,2);
line(a,b,a-20,b);
a=a-20;
}
else if(x>25 && x<=50)
{
 setcolor(GREEN);
 pieslice(a,b,0,360,2);
 line(a,b,a+20,b);
a=a+20;
}
else if(x>50 && x<=75)
{
setcolor(BLUE);
pieslice(a,b,0,360,2);
line(a,b,a,b+20);
 b=b+20;
}
else if(x>75 && x<100)
{

setcolor(YELLOW);
pieslice(a,b,0,360,2);
line(a,b,a,b-20);
b=b-20;
}
}