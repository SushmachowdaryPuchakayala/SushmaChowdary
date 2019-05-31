#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
float sum=0,s;
printf("Enter the no.of values:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("Enter the elements:");
scanf("%d",s);
sum+=s;
}
printf("sum of n numb is= %f",sum);
getch();
}