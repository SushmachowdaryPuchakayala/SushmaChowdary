#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0,temp,numb;
printf("Enter the number \n");
scanf("%d",&n);
while(n>0)
{
numb=n%10;
sum+=numb;
n=n/10;
}
printf("total count number is=%d",sum);
getch();
}