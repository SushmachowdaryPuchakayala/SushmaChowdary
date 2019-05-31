#include<stdio.h>
#include<conio.h>
void main()
{
int y,m,w,n,d;
clrscr();
printf("Enter the no.of days :");
scanf("%d",&n);
y=n/365;
printf("\nNo.of years:=%d",y);
m=(n/30);
printf("\nNo.of months:=%d",m);
w=(n/7);
printf("\nNo.of weeks:=%d",w);
d=(n%365)%7;
printf("\nNo.of days:=%d",d);
getch();
}