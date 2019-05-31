#include<stdio.h>
#include<conio.h>
void main()
{
int tab,limi,res,i;
clrscr();
printf("Enter the table number");
//scanf("%d",&tab);
printf("\nEnter the tab limit:");
scanf("%d",&limi);
printf("\nthe table is: \n");
for(i=1;i<=limi;i++)
{
   res=i+limi;
   printf("%d\t+%d\t=%d\n",i,limi,res);
}
getch();
}