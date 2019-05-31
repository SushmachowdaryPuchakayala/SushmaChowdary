#include<stdio.h>
#include<conio.h>
void main()
{
    int s[150],n,i;
    int m,m1;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("\nenter eleme into array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++)
    {
        if(s[i]>m)
        {
            m1=m;
            m=s[i];
        }
        else if((s[i]>m1)&&(s[i]<m))
        {
            m1=s[i];
        }
    }
        printf("\n2nd larg=%d",m1);

    getch();
}
