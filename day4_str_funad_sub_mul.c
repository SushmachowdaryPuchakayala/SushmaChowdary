//Write a program to add, subtract and multiply two complex numbers using structures to function.
#include<stdio.h>
#include<conio.h>
int sum(int ,int);
int sub(int ,int);
int mult(int ,int);
struct student
{
    int a,b;
}s1,s2;
void main()
{
    int a,b,i;
    for(i=0;i<2;i++)
    {
    printf("Enter a value for%d",i);
    scanf("%d",&s1.a);
    printf("\nEnter b value for%d",i);
    scanf("%d",&s1.b);
    printf("\n");
    }
    sum(a,b);
    sub(a,b);
    mult(a,b);
    getch();
}
int sum(int a,int b)
{
    int x,a,b;
    x.a=s1.a+s1.b;
    x.b=s2.a+s2.b;
    printf("Sum for s1:%d\n",x.a);
    printf("Sum for s2:%d\n",x.b);
}
int sub(int a,int b)
{
    int x,a,b;
    x.a=s1.a-s1.b;
    x.b=s2.a-s2.b;
    printf("Sub for s1:%d\n",x.a);
    printf("Sub for s1:%d\n",x.a);

}
int mult(int a,int b)
{
    int x,a,b;
    x.a=s1.a*s1.b;
    x.b=s2.a*s2.b;
    printf("Mul for s1:%d\n",x.a);
    printf("Mul for s2:%d",x.b);
}
