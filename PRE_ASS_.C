#include<stdio.h>
void main()
{
int k,a;
while(k<=20)
{
if(k<=5)
{

k+=2;
a++;
}
if(k<=10)
k+=5;
k++;
}
printf("k=%d,a=%d",k,a);
getch();
}