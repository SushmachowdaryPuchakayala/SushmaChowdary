#include<stdio.h>
#include<conio.h>
void main()
{
 int s[10];
 int k,i,j,n,temp;
 clrscr();
 printf("Enter the arr size");
 scanf("%d",&n);
 printf("Enter the arr ele:");
 for(i=0;i<n;i++)
 {
 scanf("%d",&s[i]);
 }
 for(i=0;i<=n-1;i++)
 {
 for(j=0;j<n-i-1;j++)
 {
 if(s[j]<=s[j+1])
 {
  temp=s[j];
  s[j]=s[j+1];
  s[j+1]=temp;
 }
 }
 }
 if(s[j]==s[j+1])
 {
  printf("\narr elements is:%d",s[j]);
  }

  else
  printf("wronf");
  getch();
}