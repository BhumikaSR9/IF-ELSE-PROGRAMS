#include <stdio.h>

void main()
{

int num;
int i;
int ctr=0;

printf("ENTER ANY NUMBER:");
scanf("%d",&num);

for(i=1;i<num;i++)
{
if(num%i==0)
{
ctr++;
}
}
if(ctr==1)
{
printf("NUMBER IS A PRIME NUMBER");
}
else
{
printf("NUMBER IS NOT A PRIME NUMBER");
}
getch();

}
