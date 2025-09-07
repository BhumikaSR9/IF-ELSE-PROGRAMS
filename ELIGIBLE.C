#include <stdio.h>

void main()
{
int age;

printf("ENTER YOUR AGE:");
scanf("%d",&age);

if(age>=18)
{
printf("YOU ARE ELIGIBLE TO VOTE :)");
}
else
{
printf("YOU ARE NOT ELIGIBLE TO VOTE :(");
}

getch();

}
