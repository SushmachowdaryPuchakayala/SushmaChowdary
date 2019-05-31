#include<stdio.h>
struct dis
{
    int feet;
    float inch;
}d1,d2,distance;
void main()
{
    int i;
    for(i=1;i<=2;i++)
    {
    printf("Enter value for feet  %d\n",i);
    scanf("%d",&d1.feet);
    printf("\nEnter value for inch  %d\n",i);
    scanf("%lf",&d1.inch);
    printf("\n");
    }
    distance.feet=d1.feet+d2.feet;
    distance.inch=d1.inch+d2.inch;
     if (distance.inch>12.0)
    {
        distance.inch = distance.inch-12.0;
        distance.feet++;
    }
    printf("\nDistance=%d\t%.2lf",distance.feet,distance.inch);
}
