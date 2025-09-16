#include <stdio.h>

void main()
{

double sp,cp,p,l;

clrscr();

printf("ENTER SELLING PRICE OF ARTICLE:");
scanf("%lf",&sp);
printf("ENTER COST PRICE OF ARTICLE:");
scanf("%lf",cp);

p=((sp-cp)/cf)*100;
l=((cp-sp)/cf)*100;

printf("PROFIT PERCENTAGE = %lf",p);
printf("LOSS PERCENTAGE= %lf",l);

getch();

}