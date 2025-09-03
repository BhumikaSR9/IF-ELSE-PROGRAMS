#include <stdio.h>

void main()
{
int a,b,c;
clrscr();

printf("ENTER ANY 3 NUMBERS ");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

if(a>b && b>c)
{
printf("%d IS THE LARGEST NUMBER",a);
}
else if(b>c && c>a)
{
printf("%d IS THE LARGEST NUMBER",b);
}
else
{
printf("%d IS THE LARGEST NUMBER",c);
}

getch();

}