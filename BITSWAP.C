#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
scanf("%d %d",&a,&b);
printf("a and b vales are %d %d\n",a,b);
//c=a^b;
//printf("%d",c);
a=a^b;
printf("a=%d\n",a);
b=a^b;
printf("b=%d\n",b);
a=b^a;
printf("a=%d\n",a);
printf("a and b values are %d %d",a,b);
getch();
}