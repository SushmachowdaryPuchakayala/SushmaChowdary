#include <stdio.h>
#include<conio.h>

int main()
{
    int s[10], s1[10];
    int i,n;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("\nenter eleme into array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++)
    {

        s1[i]=s[i];
    }
    printf("\nusr elements\n:");
    for(i=0;i<n;i++)
          printf("%d\n",s[i]);
    printf("\n copye elemen:");
    for(i=0;i<n;i++)
        printf("%d\n",s1[i]);
}
