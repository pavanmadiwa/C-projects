#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char str[10];
int i,c;
printf("enter a name\n");
scanf("%s",str);
i =0;c=0;
while(str[i]!='\0')
{
++i;
++c;
}
printf("length of string is %d",c);
getch();
}
