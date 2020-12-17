
	#include<stdio.h>
	#include<conio.h>
	#include<stdlib.h>
	#include<dos.h>
	#include<graphics.h>
	#define MAX 100
	int gd=DETECT,gm;
	void server(void)
	{
	setcolor(GREEN);
	circle(400,430,8);
	line(400,440,400,460);
	line(400,460,405,465);//right
	line(400,460,395,465);//left
	line(400,440,410,445);
	line(400,440,390,445);

	setcolor(WHITE);
	line(20,470,600,470);
	arc(400,435,0,180,20);
	line(380,435,380,470);
	line(420,435,420,470);
	}
	void draw_man_arr(int px)
	{
	setcolor(RED);
	circle(400+px,430,8);
	line(400+px,440,400+px,460);
	line(400+px,460,405+px,465);
	line(400+px,460,395+px,465);
	line(400+px,440,410+px,445);
	line(400+px,440,390+px,445);
	}
	void draw_man_dep(int px)
	{
	setcolor(YELLOW);
	circle(400+px,430,8);
	line(400+px,440,400+px,460);
	line(400+px,460,405+px,465);
	line(400+px,460,395+px,465);
	line(400+px,440,410+px,445);
	line(400+px,440,390+px,445);
	}

	void main()
	{
	int n,i,j,de=0,quel[MAX],nn,queeln=8,px=40,py=40;
	float ra[MAX],rs[MAX],ap[MAX],sp[MAX];
	float at[MAX],r=0.0,d[MAX],c[MAX];
	int qt=0,bt=0,sert[MAX];
	float w=0.0,q=0.0;
	clrscr();

	printf("\n\tGive no of Customer's\t");
	scanf("%d",&n);
	nn=n;
	clrscr();

	initgraph(&gd,&gm,"..\\bgi");
	randomize();
		for(i=0;i<n;i++)
		{
		ra[i]=random(11)/10.0;
		rs[i]=random(101)/100.0;
		}

		for(i=0;i<n;i++)
		{
		r=ra[i];
		if(r<=0.5)
			{
			ap[i]=0.0;
			}
		else if(r<=0.8 && r>0.5)
			{
			ap[i]=1.0;
			}
		else
			{
			ap[i]=2.0;
			}

	r=rs[i];
		if(r<=0.46)
			{
			sp[i]=1.0;
			}
		else if(r<=0.77 && r>0.46)
			{
			sp[i]=2;
			}
		else
			{
			sp[i]=3.0;
			}
		}

		for(i=0;i<n;i++)
		{
		at[i]=0.0;
			for(j=0;j<i;j++)
			{
			at[i]=at[i]+ap[j];
			}
		}


	 d[0]=0.0 ;
	 c[0]=at[0]+sp[0];
		for(i=1;i<n;i++)
		{
			d[i]=c[i-1]-at[i];
			if(d[i]<=0.0)
			{
			 d[i]=0.0;
			}
			 c[i]=sp[i]+d[i]+at[i];


		}

	quel[0]=de;
	i=1;
		while(de<=queeln)
		{
			if(de<0)
			{
				de=0;
			}
			else
			{
				de=de;
			}
			r=d[i];
			q=d[i-1];
			if((r-q)>=0 )
			{
			       quel[i]=de++;
			}
			else
			{
			 quel[i]=de--;
			}
			if(quel[i]<0)
			{
			 quel[i]=0;
			}
			 i++;


		}
	i=0;
		if(n>queeln)
		{
			while(quel[i] !=queeln)
			{
			i++;
			n=i;
			}

		}
		else
		{
			n=n;
		}

	 de=15*96;
	   server();
	   printf("\n ______________________________________");
	   printf("\n|\t Arrival   |   \tServices      |\n");
	   printf("|--------|---------|---------|--------|  Arrival\n");
	   printf("|Random  | Patterns| Random  |Patterns|");
	   printf("  Time\tDelay Completion Queue_length\n");
	   for(i=0;i<n;i++)
	   {
	   printf("|   %.1f  |    %0.f    ",ra[i],ap[i]);
	   printf("|  %.2f   |    %.0f   |",rs[i],sp[i]);
	   printf("\t   %.0f\t  %.0f\t %.0f\t  %d\n",at[i],d[i],c[i],quel[i]);
		if((n-i)==1)
		{
			goto f;
		}
		else
		{
			if(quel[i+1]==0)
			{
				draw_man_dep(py);
				py=py+40;
			}
			else
			{
				bt=quel[i+1];
				qt=quel[i];
				if((bt-qt)<=0)
				{
					draw_man_dep(py);
					py=py +40;
				}
				else
				{
					draw_man_arr(-px);
					px=px+40;
				}
			}

		}
	delay(de);
	f:

	}
     printf("|________|_________|_________|________|\n");
     r=0.0;
	for(i=0;i<n;i++)
	{
	r=r+at[i];
	w=w+sp[i];
	q=q+d[i];
	}
	for(i=0;i<n;i++)
	{
		if(quel[i]==0)
		{
		sert[i]=0;
		}
		else
		{
		sert[i]=1;
		}
	}
	for(i=0;i<n;i++)
	{
	qt=qt+(quel[i]*(at[i]-at[i-1]));
	bt=bt+sert[i];
	}
	printf("");
	printf("\n|Average Arrival | Average Service |Average|");
	printf("Area Under | Customers|");
	printf("\n|------|-------|-------|--------|Delay");
	printf("|------|-----| No |");
	printf("\n |Time | Rate| Time |Rate");
	printf("|Time |B(t) |Q(t) |Enter|Served|");
	printf("\n |%.3f |%.3f|",r/n,1.0/(r/n));
	printf("\n %.3f | %.3f | %.3f |%d |%d |",w/n,1.0/(w/n),q/n,bt,q);
	printf("%d  | %d |\n",nn,n);
	printf("\n|_________|________|________|________|");
	printf("________|_________|_________|__________|");
	getch();

}