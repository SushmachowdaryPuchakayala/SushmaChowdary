#include<stdio.h>
#include<conio.h>
void main()
{
int r,area,p;
printf("Enter radius:");
scanf("%d",&r);
p=2*3.14*r;
printf("\nperime of a cir:=%d",p);
area=3.14*(r*r);
printf("\narea of a cir:=%d",area);
getch();
}