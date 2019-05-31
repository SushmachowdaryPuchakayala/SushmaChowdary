#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s1[10],i;
    int len;
    printf("Enter the string 1:");
    scanf("%s\n",s1);
    while(s1[i]!='\0')
    {
        len++;
    }
    //if(s1[i]=='\0')
        printf("The length is ");
        puts(s1);
        getch();
}
