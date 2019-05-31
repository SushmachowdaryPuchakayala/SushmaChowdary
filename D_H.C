#include<stdio.h>
#include<conio.h>
void main()
{
 int m,m1,mi,mi1,n,i;
 char s[20];
 clrscr();
 printf("Enter the array size :");
 scanf("%d",&n);
 printf("\nEnter the array");
 for(i=0;i<n;i++)
 scanf("%d",&s[i]);
 for(i=1;i<n;i++)
 {
  if(s[i]>m)
  {
  m1=m;
  m=s[i];
  }
  else if(s[i]>m && s[i]<m1)
  m1=s[i];
  }
  printf("\nthe large arra%d",m);

for(i=1;i<n;i++)
{
 if(mi1>s[i])
 {
   mi=mi1;
  mi1=s[i];

 }
 else if(mi1>s[i] && s[i]!=mi)
	mi1=s[i];
 }
 printf("\nthe sma is %d",mi1);

 getch();
}