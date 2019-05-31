
#include<stdio.h>
#include<conio.h>
void main()
{
    int s[150],n,i;
    int mi,mi1;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("\nenter eleme into array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=1;i<n;i++)
    {
        if(mi>s[i])
        {
            mi1=mi;
            mi=s[i];
        }
        else if(mi1>s[i]&&s[i]!=mi)
        {
            mi1=s[i];
        }
    }

    printf("\n2nd Small:%d",mi1);
    getch();
}
