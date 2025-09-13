#include <stdio.h>

void main()
{

int marks;

printf("ENTER YOUR MARKS:");
scanf("%d",&marks);

if(marks>=75)
{
printf("GRADE A");
}
else if(marks=>60 && marks<75)
{
printf("GRADE B");
}
else if(marks=>40 && marks<60)
{
printf("GRADE C");
}
else
{
printf("GRADE F");
}

getch();

}
