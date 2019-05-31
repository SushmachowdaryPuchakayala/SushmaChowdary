#include<stdio.h>
#include<conio.h>
void main()
{
int a=5,b=10,temp;
clrscr();
printf("a and b vales are %d %d\n",a,b);
temp=a;
a=b;
b=temp;
printf("a and b values are %d %d",a,b);
getch();
}