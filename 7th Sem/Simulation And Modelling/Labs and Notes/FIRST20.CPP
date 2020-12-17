#include<stdio.h>
#include<conio.h>

void main()
{
int a,odd,even,c;
clrscr();
c=0;
odd=0;
even=0;
for(a=0;a<=40;a++)
{
   if(a % 2==0)
   {
   even=even+a;
   }
   else
   {
   odd=odd+a;
   }

}

printf("the sum of first 20 even number is %d\n",even);
printf("the sum of first 20 odd number is %d\n	",odd);
getch();
}