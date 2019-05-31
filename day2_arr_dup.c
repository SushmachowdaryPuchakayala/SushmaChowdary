#include <stdio.h>
#include<conio.h>

int main()
{
    int s[10];
    int i,j,n,coun=0;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("\nenter eleme into array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i]==s[j])
            {
                    coun++;
                    printf("\nno.of dup eleme=%d,%d",coun,s[i]);

                break;
            }
        }
    }


    getch();
}
