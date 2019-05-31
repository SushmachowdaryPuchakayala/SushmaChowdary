#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s1[10],s2[15];
    int i,temp;
    printf("Enter the string 1:");
    scanf("%s",s1);
    printf("Enter the string 2:");
    scanf("%s",s2);
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]==s2[i])
            temp=1;
        else
            temp=0;
    }
    if(temp==1)
    {
        printf("Equal");
    }
    else
    {
            printf("Not Equal");
    }
    getch();
}
