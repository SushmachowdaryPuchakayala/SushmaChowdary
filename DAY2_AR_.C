#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char s1[10];
char s2[15];
int s,l;
clrscr();
printf("Enter the String 1:");
scanf("%s",s1);
printf("Enter the String 2:");
scanf("%s",s2);
printf("Enter the coic");
scanf("%d",&s);
switch(s)
{
case 1:
	strcpy(s1,s2);
	printf("\n%s",s1);
	printf("\n%s",s2);
	break;
case 2:
       l=strcmp(s1,s2);
       if(l==0)
	printf("\nequal");
	else
	printf("\nnotequal");
	break;
case 3:
	strcat(s1,s2);
	printf("\n%s",s1);
	printf("\n%s",s2);
	break;
case 4:
       l=strlen(s1);
	printf("length of %s is %d",s1,l);
	break;
case 5:
	strupr(s1);
	printf("\n%s",s1);
	break;
case 6:
	strlwr(s1);
	printf("\n%s",s1);
	break;
default:
	printf("Its a wrong choice");
	break;
}
getch();
}