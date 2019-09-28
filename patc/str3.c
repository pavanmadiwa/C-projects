#include<stdio.h>
#include<conio.h>
#include<string.h>
void mystrlen();
char str[10];
void main()
{
printf("enter a name\n");
scanf("%s",str);
mystrlen();
getch();
}

 void mystrlen()
{
int i,c;
i =0;c=0;
while(str[i]!='\0')
{
++i;
++c;
}
printf("length of string is %d",c);
}
