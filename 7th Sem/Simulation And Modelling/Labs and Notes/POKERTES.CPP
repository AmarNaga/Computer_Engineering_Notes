#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
float x[20],f[20],i,j;
int n;
char null[500],alternative[500];
clrscr();
printf("enter null hypothesis\n");
scanf("%s",&null);
printf("enter alternative hypothesis\n");
scanf("%s",&alternative);
printf("enter the number of data\n");
scanf("%d",&n);
printf("enter the  observed frequency\n");
for(i=0;i<n;i++)
{
scanf("%f",& x[i]);
}
printf("enter the expected frequency\n" );
for(i=0;i<n;i++)
{
scanf("%f",& f[i]);
}
j=0.0;
for(i=0;i<n;i++)
{
printf("\t%.f \t %.f \t %f\t %.f \n", x[i],f[i], x[i]-f[i],(x[i]-f[i])*(x[i]-f[i])/f[i]);
j=j+(x[i]-f[i])*(x[i]-f[i])/f[i];

}
printf("the value of chisquare from calculation is:%.2f\n",j);
printf("enter the tabulated value from table with degree of freedom %d\n and level of significance 5%\n",n-1);
scanf("%f",&i);
if(i>j)
{
printf("since the tabulated value is greater than calculated value so, accept null hypothesis\ni.e %s\n",null);
}
else
{
printf("since the tabulated value is less than calculated value so, accept alternative hypothesis\ni.e %s\n",alternative);
}
getch();

}