#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s1[10];
    int i,len=0;
    printf("Enter the string 1:");
    scanf("%s",s1);
    len=strlen(s1);

    for(i=0;s1[i]!='\0';i++)
        s1[i]=s1[i]+32;

    printf("The lowwer is:");
    puts(s1);
getch();
}
