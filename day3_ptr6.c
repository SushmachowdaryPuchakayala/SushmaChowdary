#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j,n,sp=8;
	printf("Enter the n value:");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		for(j=0; j<sp; j++)
		{
			printf(" ");
		}
		sp=sp-2;
		for(j=0; j<=i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=0; i>n; i++)
	{
		for(j=2; j<sp; j++)
		{
			printf(" ");
		}
		for(j=i; j<=n; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}
