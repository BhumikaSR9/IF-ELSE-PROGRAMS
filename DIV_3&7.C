#include<stdio.h>

void main()
{

int num

clrscr();

printf("ENTER ANY NUMBER:");
scanf("%d",&num);

if(num%3==0 && num%7==0)
{
printf("NUMBER IS DIVISIBLE BY 3 AND 7");
}
else
{
printf("NUMBER IS NOT DIVISIBLE BY 3 AND 7");
}

getch();

}