#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
int main()
{
  char string[10];
  int n;
  int totuser,succall,x,z,unsuccall,cllreq,alc_ch;
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");

  printf("\n\n\n\n\n\n\n\nEnter the total channel per cell\n");
  scanf("%d",&n);
  int y=n;                    //initially total channel(n)=available channel(y)
  itoa(n,string,10);       //converting int to string to print in specified location
  outtextxy(5,5,"Fixed Channel Allocation");

  rectangle(5,15,450,115);
  line(5,30,450,30);
  line(5,50,450,50);
  line(5,70,450,70);
  line(5,90,450,90);
   //column
   line(45,15,45,115);
   line(90,15,90,115);
   line(150,15,150,115);
   line(205,15,205,115);
   line(275,15,275,115);
   line(370,15,370,115);
   outtextxy(10,20,"C.Id");             //channel ID
   outtextxy(45,20,"Ch.Set");           // total channel Set
   outtextxy(95,20,"Avl.Ch.");          //available or free channel
   outtextxy(155,20,"Alc.Ch");         // Allocated channel
   outtextxy(210,20,"Suc.cll");       //Successful call
   outtextxy(278,20,"Unsuc. Cll");      //Unsuccessful Call
   outtextxy(375,20,"Term. Cll");       //Terminated Call

   outtextxy(15,40,"1");
   outtextxy(15,60,"2");
   outtextxy(15,80,"3");
   outtextxy(15,100,"4");

   outtextxy(55,40,string);        //to display total channel available in each cell
   outtextxy(55,60,string);
   outtextxy(55,80,string);
   outtextxy(55,100,string);


   totuser=1000;               //assuming total user as 1000
   while(!kbhit())
    {
      x=random(totuser);         // x= call request
      if(x>y)                     //y= available channel
       {
	 succall=y;
	 unsuccall=x-y;
	 alc_ch=succall;
	 y=0;                       //available channel becomes 0 since all channel are used
	 outtextxy(215,35,itoa(succall,string,10)); //displaying successful call
	 outtextxy(160,35,itoa(alc_ch,string,10));//displaying allocated channel
	 outtextxy(100,35,"0");                  //displaying available channel
	 outtextxy(285,35,itoa(unsuccall,string,10)); //displaying unsuccessful call

	 z=random(succall);           //z = call terminate
	 y=y+z;
	 alc_ch= alc_ch-z;
	 outtextxy(380,35,itoa(z,string,10));
	 outtextxy(215,35,itoa(succall,string,10));
	 outtextxy(100,35,itoa(y+z,string,10));
	 outtextxy(160,35,itoa(alc_ch,string,10));
	 delay(200);
	}
      else
       {
	 succall=x;
	 unsuccall=0;
	 alc_ch=succall;
	 y=y-x;                                 //available channel
	 outtextxy(215,35,itoa(succall,string,10));
	 outtextxy(100,35,itoa(y-x,string,10));    //print available channel
	 outtextxy(285,35,"0");                  //print unsuccessfulcall
	 outtextxy(160,35,itoa(alc_ch,string,10));
	 z=random(succall);           //z = call terminate
	 y=y+z;
	 alc_ch= alc_ch-z;
	 outtextxy(380,35,itoa(z,string,10));
	 outtextxy(215,35,itoa(succall,string,10));
	 outtextxy(100,35,itoa(y+z,string,10));
	 outtextxy(160,35,itoa(alc_ch,string,10));
	 delay(200);
       }

      setfillstyle(1,BLACK);
      bar(95,33,145,47);
      bar(155,33,200,47);
      bar(210,33,270,47);
      bar(280,33,365,47);
      bar(375,33,445,47);
    }
  getch();
}



