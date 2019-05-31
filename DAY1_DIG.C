#include<stdio.h>
#include<conio.h>
void main()
{
int n,count=0;
clrscr();
printf("Enter the numb:\n");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("the no.of int in the numb is =%d",count);
getch();
}