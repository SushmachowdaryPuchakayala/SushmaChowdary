#include<stdio.h>
#include<string.h>
void main()
{
    int blank=0,tab=0,line=1,i;
    char s1[1000];
    printf("Entter the string 1:");
    scanf("%[^\n]s",s1);
    for(i=0;s1[i]!=EOF;i++)
    {
        if(s1[i]=='\n')
           line++;
          else if(s1[i]=='\t')
           tab++;
        else if(s1[i]==' ')
            blank++;
    }
        if (s1[i]==EOF)
            printf("\nb=%d\nt=%d\nl=%d",blank,tab,line);

}
