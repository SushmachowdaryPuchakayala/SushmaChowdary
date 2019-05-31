#include<stdio.h>
#include<conio.h>
void main()
{
	char n;
	clrscr();
	printf("Enter Any char:\n");
	scanf("%c",&n);
	  if((n>='a' && n<='z')||(n>='A' && n<='Z'))
	  {
	  printf("Its a alpha\n");
		if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||
		n=='I'||n=='O'||n=='U')
		{
		printf("Its a vowel =%d\n",n);

		if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
		{
		printf("Its a lower_case vowel\n");
		}
		else if(n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
		{
		printf("Its a upper_case vowel\n");
		 }

	  }
	  }
	    if(!(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||
		n=='I'||n=='O'||n=='U'))
		{
		printf("Its a const=%d\n",n);
	       if(!(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'))
		{
		printf("Its a lower_case const\n");
		}
		else if(!(n=='A'||n=='E'||n=='I'||n=='O'||n=='U'))
		{
		printf("Its upper_case const\n");
		}
		}
	getch();
}