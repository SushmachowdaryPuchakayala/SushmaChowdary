#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s1[10],i;
    int len=0;
    printf("Enter the string 1:");
    scanf("%s\n",s1);
    for(i=0;s1[i]!='\0';i++)
    {
        len++;
    }
    if(s1[i]=='\0')
        printf("The length is %d:",len);

        getch();
}
