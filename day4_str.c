#include<stdio.h>
#include<conio.h>
void display();
struct std
{
int id,age,marks;
char name[9];
}s1,s2;

int main()
{
    printf("Enter the id for s1\n");
    scanf("%d",&s1.id);
    printf("Enter the id for s2\n");
    scanf("%d",&s2.id);
    printf("Enter the age for s1\n");
    scanf("%d",&s1.age);
    printf("Enter the age for s2\n");
    scanf("%d",&s2.age);
    printf("Enter the marks for s1\n");
    scanf("%d",&s1.marks);
    printf("Enter the marks for s2\n");
    scanf("%d",&s2.marks);
    printf("Enter the name for s1\n");
    scanf("%s",s1.name);
    printf("Enter the name for s2\n");
    scanf("%s",s2.name);
    display();

}
void display()
{
  printf("\nThis is a display function\n\n");
  printf("StdId\tStdAge\tStdName\tStdMarks\n");
  printf("%d\t%d\t%d\t%s\n",s1.id,s1.age,s1.marks,s1.name);
  printf("%d\t%d\t%d\t%s",s2.id,s2.age,s2.marks,s2.name);
}
