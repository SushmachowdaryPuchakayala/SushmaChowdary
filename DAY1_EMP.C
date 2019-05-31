#include<stdio.h>
#include<conio.h>
void main()
{
int id,tot_work;
int sal,hour;
clrscr();
printf("Enter emp id:");
scanf("%d",&id);
printf("Enter emp tot_work");
scanf("%d",&tot_work);
printf("Enter emp sal per hou");
scanf("%d",&hour);
sal=hour*tot_work;
printf("emp sal=%d",sal);
getch();
}