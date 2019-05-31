#include<stdio.h>
#include<conio.h>
void main()
{
int h,w,area,p;
clrscr();
printf("Enter the height:");
scanf("%d",&h);
printf("\nEnter the width:");
scanf("%d",&w);
p=2*(h+w);
printf("\nperim of a rect:%d",p);
area=w*h;
printf("\narea of a rect:%d",area);
getch();
}
