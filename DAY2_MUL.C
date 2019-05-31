#include<stdio.h>
#include<conio.h>
void main()
{
int i,limit,tab,res;
clrscr();
printf("The table");
printf("\nEnter the number:");
scanf("%d",&limit);
for(i=1;i<=limit;i++)
{
res=i*limit;
printf("%d\t *\t %d\t=%d\n",i,limit,res);
}
getch();
}