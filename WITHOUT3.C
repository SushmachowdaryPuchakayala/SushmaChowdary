#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
scanf("%d%d",&a,&b);
printf("a and b vales%d %d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("a and b vale are %d %d",a,b);
getch();
}
