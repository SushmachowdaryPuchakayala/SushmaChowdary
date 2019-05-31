#include<stdio.h>
#include<conio.h>
void main( )
{
    int s[20],n,i,sum=0;
     printf("Enter the array size:");
     scanf("%d",&n);
     printf("\nenter the arr elemen:");
     for(i=0;i<n;i++)
     {
            scanf("%d",&s[i]);
     }
      for(i=0;i<n;i++)
    {
        sum=sum+s[i];
    }
    printf("\nsum of elem=%d",sum);
    getch();
}
