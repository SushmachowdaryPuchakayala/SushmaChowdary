#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
        int i,j,n;
    printf("Enter the numb:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");

        }
        printf("\n");
    }
    getch();
}
