#include <stdio.h>

void main()
{
    int i, j,n;

    /* Input rows to print from user */
    printf("Enter  n number : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=(n*2 -(2*i-1)); j++)
        {
            printf("*");
        }

        /* Move to next line */
        printf("\n");
    }

    return 0;
}
