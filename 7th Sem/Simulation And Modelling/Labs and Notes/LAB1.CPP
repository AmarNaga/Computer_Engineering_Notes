#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
	int gd,gm,i;

	float p0,p1,r=44,x,y,x0,y0;;
	gd=DETECT;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	x=getmaxx();
	y=getmaxy();
	//for center
	line(0,y/2,x,y/2);
	line(x/2,0,x/2,y);

	p0=1-r;
	x0=0;
	y0=r;
	putpixel(x0,y0,2);
	while(x0<=y0)
	{
		if(p0<0)
		{
		     x0=x0+1;
		     y0=y0;
		     p0=p0+(2*x0)+1;
		}
		else
		{
			x0=x0+1;
			y0=y0-1;
			p0=p0+(2*x0)-(2*y0)+1;
		}
		putpixel(x0+(x/2),y0+(y/2),2);
	}
	getch();
}