#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s1[10],s2[10];
int i,l;
printf("Enter the string 1:");
scanf("%s",s1);
l=strlen(s1);
l--;
for(i=0;s1[i]!='\0';i++)
{
   s2[l]=s1[i];
   l--;
}
printf("the rev str is %s",s2);
getch();
}