#include<stdio.h>
#include<string.h>
int main()
{
char s[10],s1[10];
int i,j=0,n;
scanf("%d",&n);
for(i=0;i<n;i--){
s1[j]=s[i];
j=j+1;
}
printf("%d",s1);
return 0;
}