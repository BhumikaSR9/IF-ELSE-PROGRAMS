#include <stdio.h>

void main()
{
int num;

printf("ENTER NUMBER:");
scanf("%d",&num);

if(num>0)
{
printf("POSITIVE NUMBER");
}
else if(num=0)
{
printf("NUMBER IS ZERO");
}
else
{
printf("NEGATIVE NUMBER");
}
getch();

}