#include<stdio.h>
#include<conio.h>
void main()
{
int s,n,odd,ev,sum=0,sumn,sum1,numb,uni;
clrscr();
printf("Division");
printf("\nEnter the  number");
scanf("%d",&n);
printf("\nEnter the choic");
scanf("%d",&s);
switch(s)
{
case 2:
	uni=(n%10);
	if(uni/2)
	printf("\nunit value div 2");
	else
	printf("\nnot div 2");
	break;
case 3:
	while(n>0)
	{
	numb=n%10;
	sum+=numb;
	n=n/10;
	}
	printf("\ntotal number is=%d",sum);
	if(sum%3==0)
	printf("\ndiv by 3");
	else
	printf("not div by 3");
	break;
case 4:
	uni=(n%100);
	if((uni/4)||(uni==0))
	printf("\n div by 4");
	else
	printf("\n not div by 4");
	break;
case 5:
	uni=(n%10);
	if((uni/5)||(uni==0))
	printf("\n div by 5");
	else
	printf("\n not div by 5");
	break;
case 6:
	uni=(n%10);
	while(n>0)
	{
	numb=n%10;
	sum+=numb;
	n=n/10;
	}
	printf("\ntotal number is=%d",sum);
	if((uni/2||sum%3==0))
	printf("\n div by 6");
	else
	printf("\n not div by 6");
	break;
case 7:
	if(n%7==0)
	printf("\ndiv by 7");
	else
	printf("\n not div by 7");
	break;
case 8:
	uni=(n%1000);
	if((uni/8)||(uni==0))
	printf("\n div by 8");
	else
	printf("\n not div by 8");
	break;
case 9:
	while(n>0)
	{
	numb=n%10;
	sum+=numb;
	n=n/10;
	}
	printf("\ntotal number is=%d",sum);
	if(sum%9==0)
	printf("\n div by 9");
	else
	printf("\n not div by 9");
	break;
case 10:
	uni=(n%10000);
	if(n/10)
	printf("\n div by  10");
	else
	printf("\n not div by 10");
	break;
case 11:
	if(n%2==0)
	{
	n=n/10;
	ev=n%10;
	sum1+=ev;
	n=n/10;
	}
	if(!(n>0)&&(n%2==0))
	{
	n=n/10;
	odd=n%10;
	sumn+=odd;
	n=n/100;
	}
	sumn=sumn-sum1;
	if((sumn==0)||(sumn%11==0))
	printf("\n div by 11");
	else
	printf("\n not div by 11");
	break;

}
getch();
}