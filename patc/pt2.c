#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
char str[10];
char ch;
char *ptr;
printf("enter the string\n");
scanf("%s",str);
printf("enter a character\n");
scanf("%c",&ch);
ptr=str;
if(*str!=ch )
{
printf("not a valid input\n");
}
while(*ptr!=ch)
{
++ptr;
}
printf("%s", ptr);
getch();
}
