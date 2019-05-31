#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the values of a,b,c:");
scanf("%d%d%%d",&a,&b,&c);
if(a>=b)
{
	if(a>=c)
	{
		printf("A is the biggest value");
	}
	else
	{
		printf("C is the biggest value");
	}
}
else
{
	if(b>=c)
	{
		printf("B is the biggest value");
	}
	else
	{
	printf("C is the biggest value");
	}
}
getch();
}