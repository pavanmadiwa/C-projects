#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
void main()
{
char str[10];
int i;
printf("enter the name in lower case\n");
scanf("%s", str);
i=0;
while(str[i]!=0)
{
str[i]=str[i]-32;
++i;
}
printf("%s",str);
getch();
}
