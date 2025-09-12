#include <stdio.h>

void main()
{
int num,no;
int d,rev;

printf("ENTER ANY NUMBER:");
scanf("%d",&num);

no=num;

while(no>0)
{
d=no%10;
rev=rev*10+d;
no/=10;
}

printf("REVERSED NUMBER=%d",rev);

if(num==rev)
{
printf("NUMBER IS PALINDROME.");
}
else
{
printf("NUMBER IS NOT PALINDROME.");
}

getch();

}