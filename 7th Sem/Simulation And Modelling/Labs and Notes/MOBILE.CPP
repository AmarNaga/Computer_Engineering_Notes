#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
int a1,b1,c1;
void rect();
void check();
void channelallocation();
void calculation();
void initialone();
void secondone();
void thirdone();
void main()
{
 int gd,gm,i;
gd=DETECT;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
printf("Chose ur choise\n 1. Lab 1\n2. Lab 2\n");
scanf("%d",&i);
if(i==1)
{

  rect();
  check();
  }
  else if(i==2)
  {
  printf("please wait updating");
  channelallocation();
  }
  else
  {
  printf("wrong choice");
  }
getch();
}
void channelallocation()
{
rectangle(40,100,510,210);
line(40,120,510,120);
line(70,100,70,210);
line(40,150,510,150);
line(110,100,110,210);
line(40,180, 510,180);
line(180,100,180,210);
line(320,100,320,210);
line(360,100,360,210);
line(405,100,405,210);
line(450,100,450,210);
settextstyle(2,0,4);
outtextxy(48,105,"Cell");
outtextxy(50,130,"A");
outtextxy(50,160,"B");
outtextxy(50,190,"C");
outtextxy(80,130,"1");
outtextxy(80,160,"2");
outtextxy(80,190,"3");

outtextxy(75,105,"cellid");
outtextxy(115,105,"Fixed");
outtextxy(190,105,"Remaining Channel");
outtextxy(325,105,"S.call");
outtextxy(365,105,"Us.call");
outtextxy(410,105,"T.call");
outtextxy(465,105,"Borrow");
outtextxy(40,220,"Successful calls=\n");
outtextxy(40,240,"unsucessful calls=\n");
outtextxy(40,260,"Call Request =\n");
calculation();
}
void calculation()
{
int a,b,c,d;
randomize();
outtextxy(140,130,"10");
outtextxy(140,160,"10");
outtextxy(140,190,"10");
while(!kbhit())
{

a=random(4);

if(a==1)
{
setfillstyle(1,BLACK);
//bar(140,160,145,160);
//bar(140,190,145,190);
//bar(250,155,270,170);
//bar(250,185,270,200);

initialone();

}
else if(a==2)
{
setfillstyle(1,BLACK);
//bar(140,130,145,130);
//bar(140,190,145,190);
//bar(250,125,270,140);
//bar(250,185,270,200);

secondone();
}
else if(a==3)
{
setfillstyle(1,BLACK);
//bar(140,160,145,160);
//bar(140,130,145,130);
//bar(250,125,270,140);
//bar(250,155,270,170);

thirdone();

}
delay(100);
}
}
void initialone()
{
int crq,uns,suc,callter;
char string[25];
crq=random(20);
setfillstyle(1,BLACK);
bar(190,250,210,270);
bar(250,215,270,230);
bar(250,125,270,140);
bar(250,230,270,250);
bar(330,125,350,140);
bar(370,125,390,140);
bar(420,125,440,140);
itoa(crq,string,10);
outtextxy(200,260,string);
if(a1>crq)
	{
		a1=a1-crq;
		suc=crq;
		itoa(suc,string,10);
		outtextxy(260,220,string);
		outtextxy(340,130,string);
		outtextxy(380,130,"0");
		itoa(a1,string,10);
		outtextxy(260,130,string);
		delay(100);
	}
 else
	{
		uns=crq-a1;
		suc=a1;
		itoa(uns,string,10);
		outtextxy(260,240,string);
		outtextxy(380,130,string);
		itoa(suc,string,10);
		outtextxy(260,220,string);
		outtextxy(340,130,string);
		outtextxy(260,130,"0");
		a1=0;
		delay(100);
	}
	callter=random(suc);
	a1=callter+a1;
	bar(250,155,270,170);
	itoa(a1,string,10);
	outtextxy(260,160,string);
	itoa(callter,string,10);
	outtextxy(420,130,string);

}
void secondone()
{
int crq,uns,suc,callter;
char string[25];
crq=random(20);
setfillstyle(1,BLACK);
bar(190,250,210,270);
bar(250,215,270,230);
bar(250,155,270,170);
bar(250,230,270,250);
bar(330,155,350,170);
bar(370,155,390,170);
bar(420,155,440,170);

itoa(crq,string,10);
outtextxy(200,260,string);
if(b1>crq)
	{
		b1=b1-crq;
		suc=crq;
		itoa(suc,string,10);
		outtextxy(260,220,string);
		outtextxy(340,160,string);
		itoa(b1,string,10);
		outtextxy(260,160,string);
		delay(100);
	}
 else
	{
		uns=crq-b1;
		suc=b1;
		itoa(uns,string,10);
		outtextxy(260,240,string);
		outtextxy(380,160,string);
		itoa(suc,string,10);
		outtextxy(340,160,string);
		outtextxy(260,220,string);
		outtextxy(260,160,"0");
		b1=0;
		delay(100);
	}
	callter=random(suc);
	b1=callter+b1;
	itoa(callter,string,10);
	outtextxy(430,160,string);
	bar(250,155,270,170);
	itoa(b1,string,10);
	outtextxy(260,160,string);

}
void thirdone()
{
int crq,uns,suc,callter;
char string[25];
crq=random(20);
setfillstyle(1,BLACK);
bar(190,250,210,270);
bar(250,215,270,230);
bar(250,185,20,200);
bar(250,230,270,250);
bar(330,185,350,200);
bar(365,185,385,200);
bar(410,185,440,200);


itoa(crq,string,10);
outtextxy(200,260,string);
if(c1>crq)
	{
		c1=c1-crq;
		suc=crq;
		itoa(suc,string,10);
		outtextxy(260,220,string);
		outtextxy(340,190,string);
		itoa(c1,string,10);
		outtextxy(260,190,string);


		delay(100);
	}
 else
	{
		uns=crq-c1;
		suc=c1;
		itoa(uns,string,10);
		outtextxy(260,240,string);
		outtextxy(370,190,string);
		itoa(suc,string,10);
		outtextxy(260,220,string);
		outtextxy(270,190,"0");
		c1=0;
		delay(100);
	}
	callter=random(10);
	itoa(callter,string,10);
	outtextxy(420,190,string);
	c1=callter+c1;
 if(c1>10)
 {
 c1=10;
 }

}
void rect()
{
rectangle(10,10,170,170);
line(90,10,90,170);
line(10,90,170,90);
}
void check()
{int x,y,o,p,i,j,n,f;
i=30;o=30,p=265;
j=190;   n=10;f=0;
outtextxy(0,190,"T=0.4:");
outtextxy(0,275,"m=1:");
while(!kbhit())
{
setfillstyle(1,BLACK);
bar(29,274,40,285);
bar(42,189,56,200);
x=random(170);
y=random(170);
setcolor(RED);
if(x>10 && y<90 && x<90 && y>10)
{
	outtextxy(i+20,j,"a");
	setcolor(GREEN);
	pieslice(x,y,0,360,2);
	setcolor(RED);
	delay(200);

	if(f!=1)
	{
	outtextxy(o,p+10,"a");

	f=1;
	}

}
if(x>90 && y<90 && x<170 && y>10)
 {
	outtextxy(i+20,j,"b");
	setcolor(BLUE);
	pieslice(x,y,0,360,2);
	setcolor(RED);
	delay(200);

	if(f!=2)
	{
	outtextxy(o,p+10,"b");

	f=2;
	}

}
if(x>10 && y>90 && x<90 && y<170)
 {
	outtextxy(i+20,j,"d");
	setcolor(YELLOW);
	pieslice(x,y,0,360,2);
	setcolor(RED);
	delay(200);
	if(f!=3)
	{
	outtextxy(o,p+10,"d");

	f=3;
	}

}
if(x>90 && y>90 && x<170 && y<170)
 {
	outtextxy(i+20,j,"c");
	pieslice(x,y,0,360,2);
	delay(200);


	if(f!=4)
	{
	outtextxy(o,p+10,"c");

	f=4;
	}
}

(200);
}
}
