#include<stdio.h>
#include<string.h>
void main()
{
    char s1[20];
    int i,w=0;
    printf("Enter any string: ");
    //scanf("%s",s1);
    scanf("%[^\n]s",s1);
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]==' ')
           // ||s1[i]=='\n'||s1[i]=='\t')
            w++;
    }

    printf("no.of word= %d",w+1);
}
