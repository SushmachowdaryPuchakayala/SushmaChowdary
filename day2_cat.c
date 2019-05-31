#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s1[10],s2[10];
    int i,j,temp,l=0;
    printf("Enter the string 1:");
    scanf("\n%s",s1);
    printf("Enter the string 2:");
    scanf("\n%s",s2);
    for(i=0;s1[i]!='\0';i++)
    {
        l++;
        temp=l;
    }
    for(j=0;s2[i]!='\0';j++)
    {
        s1[temp]=s2[i];

    }
    s1[temp]='\0';
    printf("The concat string");
    puts(s2);
    getch();
}
