#include<stdio.h>
#include<conio.h>
void main( )
{
    int s[20],n,add,i;
     printf("Enter the array size:");
     scanf("%d",&n);
     printf("\narray in unorder:");
     for(i=0;i<n;i++)
     {
            scanf("%d",&s[i]);
     }
    printf("\nenter the ele to ins: ");
    scanf("%d",&add);
     i=n-1;
     while(add<s[i]&&s[i]>=0)
     {
           s[i+1]=s[i];
           i--;
     }
     s[i+1]=add;
     n++;
     printf("\nIns array are:\n");
     for(i=0;i<n;i++)
     {
             printf("%d\t", s[i]);
     }
     getch();
}
