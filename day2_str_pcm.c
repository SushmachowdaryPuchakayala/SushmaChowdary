#include<stdio.h>
#include<conio.h>
void display();
struct stdmark
{
  int id,p_mark,c_mark,m_mark;
  char name[20];
}s[5];
int main()
{
    int i,avg,pre;
    avg=((s[i].p_mark)+(s[i].c_mark)+(s[i].m_mark));
    pre=(avg/300);
    printf("Student Marks:");

    for(i=0;i<=5;i++)
    {
        s[i].id=i+1;
        printf("\n Std is for %d :",s[i].id);
        printf("\n Enter the p_marks :");
        scanf("%d",&s[i].p_mark);
        printf("\n Enter the  c_mark:");
        scanf("%d",&s[i].c_mark);
        printf("\nEnter the  m_marks :");
        scanf("%d",&s[i].m_mark);
        printf("the pre of %d :",pre);
        printf("\n");
    }

        display();
        printf("\n");
}
void display()
{
    int i;
    int pre;
    printf("STUDENT MARKS DETAILS:\n");

    for(i=0;i<=5;i++)
    {
        printf("\nstd id numb: %d\n",i+1);
        printf("\nstd p_marks: %d",s[i].p_mark);
        printf("\nstd c_marks: %d",s[i].c_mark);
        printf("\nstd m_marks: %d",s[i].m_mark);
        printf("\nstd percentage marks: %d",pre);
        printf("\n");
    }
}
