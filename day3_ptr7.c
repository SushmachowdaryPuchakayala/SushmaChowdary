#include <stdio.h>
int main()
{
    int i,sp,n,k=0;

    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(i=1; i<=n; ++i,k=0)
    {
        for(sp=1;sp<=n-i;sp++)
        {
            printf("  ");
        }

        while(k != 2*i-1)
        {
            printf("* ");
            k++;
        }

        printf("\n");
    }

    return 0;
}
