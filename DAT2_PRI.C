#include<stdio.h>
#include<conio.h>
void main()
{
int i,count,j,value,sum=0,n;
clrscr();
printf("Enter the Value");
scanf("%d",&value);
printf("Enter the Range:");
scanf("%d",&n);
for(j=2;j<=n;j++)
{
	sum=0;
	for(i=2;i<=j;i++)
	{
	if(j%i==0)
	sum++;
	}
	if(sum==1)
	  printf("%d",j);
	  }
      //		if(sum==2)
    //		printf("\nPrime number");
  //		else
//		printf("\nNot prime");


getch();
}