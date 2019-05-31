#include<stdio.h>
#include<conio.h>
void main()
{
int amount,tot;
printf("Enter the amount:");
scanf("%d",&amount);
tot=amount/100;
printf("\n100 rup note are=%d",tot);
amount-=(tot*100);
tot=amount/50;
printf("\n50 rup note are=%d",tot);
amount-=(tot*50);
tot=amount/20;
printf("\n 20 rup note are=%d",tot);
amount-=(tot*20);
tot=amount/10;
printf("\n 10 rup note are=%d",tot);
amount-=(tot*10);
tot=amount/5;
printf("\n 5 rup note are=%d",tot);
amount-=(tot*5);
tot=amount/2;
printf("\n2 rup note are=%d",tot);
amount-=(tot*2);
tot=amount/1;
printf("\nrup note are=%d",tot);
getch();
}