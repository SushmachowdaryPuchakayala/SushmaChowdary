#include<stdio.h>
#include<conio.h>
void main()
{

int a=10;
char y='P';
char d='p';
signed int b=20;
signed short int c=5;
unsigned int e=243;
float f=43.65;
double d1=27.254;
signed int x=12;
float f1=23.1;
signed int s1=110;
long float f2=23.423465;

clrscr();
printf("%d,%d,%hi,%lu,%li,%e,%g,",a,b,c,e,x,s1);
printf("%c,%c",y,d);
printf("%f,%Ld,%ld,%lf",f,d1,f1,f2);
//printf("%d",a);
//printf("%c",d);
//printf("%d", b);
//printf("%hi",c);
//printf("%lu" ,e);
//printf("%f",f);
//printf("%Ld",d1);
//printf("%li",x);
//printf("%Lf",f1);
getch();
}