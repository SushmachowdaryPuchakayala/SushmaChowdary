#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   char s1[100],s2[100],s3[100];
   int i,l,ps,temp;
   printf("Enter  the sring1:\n");
   scanf("%s",s1);
   printf("Enter the string2:\n");
   scanf("%s",s2);
   printf("Enter the Position to be inserted");
   scanf("\n%d",&ps);
   for(i=0;i<ps;i++)

       s3[i]=s1[i];

   temp=ps;
   for(i=0;s2[i]!='\0';i++)
       s3[ps]=s2[i];
       ps++;
   for(i=temp;s1[i]!='\0';i++)
       s3[ps]=s1[i];
       ps++;
   s3[ps]='\0';
   printf("\nentire string is: %s",s3);
}
