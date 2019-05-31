#include<stdio.h>
void display();
struct dmy
{
    int date,month,year;
}d1,d2;
void main()
{
    int i;
    printf("\nEnter the date :");
    scanf("%d",&d1.date);
    printf("\nEnter the month :");
    scanf("%d",&d1.month);
    printf("\nente the year :");
    scanf("%d",&d1.year);
    printf("\nEnter the date :");
    scanf("%d",&d2.date);
    printf("\nEnter the month :");
    scanf("%d",&d2.month);
    printf("\nente the year :");
    scanf("%d",&d2.year);
    display();
    printf("\n");
}
void display()
{
        printf("\nThe date is :%d",d1.date);
        printf("\nThe month is :%d",d1.month);
        printf("\nThe year is :%d",d1.year);
        printf("\nThe date is :%d",d2.date);
        printf("\nThe month is :%d",d2.month);
        printf("\nThe year is :%d",d2.year);

        if(((d1.date)&&(d1.month)&&(d1.year))==((d2.date)&&(d2.month)&&(d2.year)))
        {
            printf("\nThe Dates ae equal");
        }
        else
            printf("\n Dates are not equal");
}
