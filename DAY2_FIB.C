#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum,curr=0,next=1,n;
clrscr();
printf("Enter the vales");
scanf("%d",&n);
printf("%d\t %d\t",curr,next);
for(i=0;i<=n;i++)
{
    sum=curr+next;
    curr=next;
    next=sum;

   printf("%d\t",sum);
}
getch();
}