#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    //char a[10];
        int i,j,n;
   // printf("Enter the string:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
            //a[i]++;
        }
       // printf("\n");
    }
    getch();
}
