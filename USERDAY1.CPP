#include<stdio.h>
#include"conio.h"
#include<stdlib.h>

void main()
{
int a;
short b;
char c;
float d;
double e;
char f;
unsigned int g;
signed int h;
printf("Integer,short,unsigned int,signed int");
scanf("%d,%li,%hu,%hi",&a,&b,&g,&h);
printf("int=%d,short=%li,unsigned int=%hu,signed int=%hi",a,b,g,h);
fflush(stdin);
scanf("%c,%c",&c,&f);
printf("char=%c,char=%c");
fflush(stdin);
scanf("%f,%ld ",&d,&e);
printf("float=%f,double=%ld");
fflush(stdin);
getch();

}
