#include <stdio.h>
void display();
struct student
{
    //char name[50],addr[30];
    int id,age;
    //int marks;
} s[5];

int main()
{
    int i;

    printf("Students:\n");
    for(i=0;i<5;i++)
    {
        s[i].id=i+1;
        printf("\nThe std id  %d,\n",s[i].id);
        printf("\nThe std age:");
        scanf("%d",&s[i].age);
        //printf("\nEnter the std addres:");
        //scanf("%s",s[i].addr);
        //printf("\nEnter the std name:");
        //scanf("%s",s[i].name);
        //printf("\nEnter the std marks:");
        //scanf("%d",&s[i].marks);
    }
        printf("\n");
        display();

getch();
}
void display()
{

    int i,n;
    printf("STUDENT DETAILS:\n");

    printf("Enter the id numb");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        printf("\nstd id numb: %d\n",i+1);
        //printf("\nstd name: %s",s[i].name);
          printf("\nstd age: %d",s[i].age);
        //printf("\nstd marks: %d",s[i].marks);
        //printf("\nstd address: %d",s[i].addr);
        if(s[i].id==n)
      printf("\nstd id:%d\nstd age: %d",s[i].id,s[i].age);

        printf("\n");
    }

}
