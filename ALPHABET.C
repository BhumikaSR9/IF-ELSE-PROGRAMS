#include <stdio.h>

void main()
{

char c;
int n;

printf("ENTER ANY CHARACTER IN LOWERCASE");
scanf("%c ",&c);

n=(int)c;

if(n>=97 && n<=122)
{
printf("CHARACTER IS AN ALPHABET");
}
else
{
printf("CHARACTER IS NOT AN ALPHABET");
}

getch();

}
