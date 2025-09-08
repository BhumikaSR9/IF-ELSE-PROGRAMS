#include <stdio.h>

void main()
{
int a1;
int a2;
int a3;

printf("ENTER THE THREE ANGLES OF TRIANGLE IN DEGREE:");
scanf("%d",&a1);
scanf("%d",&a2);
scanf("%d",&a3);

if(a1+a2+a3==180)
{
printf("TRIANGLE IS VALID");
}
else
{
printf("TRIANGLE IS NOT VALID");
}

getch();

}