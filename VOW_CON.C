#include <stdio.h>

void main()
{

char c;

printf("ENTER ANY CHARACTER IN LOWER CASE");
scanf("%c",&c);

if(c=='a'|| c=='e'||c=='i'||c=='o'||c=='u')
{
printf("%c IS A VOWEL",c);
}
else
{
printf("%c IS A CONSONANT",c);
}
getch();
}
