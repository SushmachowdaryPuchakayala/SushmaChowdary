#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s1[10],s2[10];
int len=0,i;
printf("Enter the string 1");
scanf("%s",&s1);
for(i=0;s1[i]!='\0';i++)
len++;
if(s1[i]=='\0')
printf("The leng of str1",len);
getch();
}