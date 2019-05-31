
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s1[10],s2[10],temp;
    int i,len;
    printf("Enter the string 1:");
    scanf("%s",s1);
len=strlen(s1);
len-=1;
    for(i=0;s1[i]!='\0';i++)
    {
        s2[len]=s1[i];
        len--;
    }
    s2[len]='\0';
    printf("the rev is");
    puts(s2);
    getch();
}
