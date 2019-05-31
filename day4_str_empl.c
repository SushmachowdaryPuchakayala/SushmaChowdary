#include<stdio.h>
void display();
struct custo
{
    char name[20];
    int bal,acc_no;
}s[10];
void main()
{
    int i;
    for(i=0;i<10;i++)
    {

    printf("\nEnter the customer name :");
    scanf("%s",&s[i].name);
    printf("\nEnter the customer acc_no :");
    scanf("%d",&s[i].acc_no);
    printf("Enter the customer bal :");
    scanf("%d",&s[i].bal);
    }
    display();
    printf("\n");
}
void display()
{
    int i;
    printf("\nCUSTOMER DETAILS:\n");

    for(i=0;i<10;i++)
    {
        printf("\ncustome name: %s",s[i].name);
        printf("\ncustome acc_no: %d",s[i].acc_no);
        printf("\ncustome balance : %d",s[i].bal);
        if(s[i].bal<=200)
        {
            printf("\nThe customer having less than 200 is :%s",s[i].name);
        }
        if(s[i].bal>=1000)
        {
            printf("\nThe customer amount is increas by 100 :%d",s[i].bal+100);
        }
        printf("\n");
    }
}
