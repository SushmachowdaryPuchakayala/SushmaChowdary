#include<stdio.h>
#include<conio.h>
void main()
{
      int n,ps=0,nv=0,num,i;
      printf("\n enter no.of values: ");
      scanf("%d",&n);
      printf("\nEnter %d Numbers:",n);

      for(i=1;i<=n;i++)
      {
            scanf("%d",&num);
            if(num > 0)
                  ps=ps+num;
            else
                  nv=nv+num;
      }
       printf("\n ps=%d",ps);
      printf("\n nv=%d",nv);

      getch();
}
