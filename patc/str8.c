#include<stdio.h>
#include<string.h>
#include<conio.h>
void mystrpal(char []);
void checkpal();
void main()
{
char str1[10];
printf("enter a string\n");
scanf("%s",str1);
mystrpal(str1);
checkpal();
getch();
}

void mystrpal(char str1[])
{
char str2[10];
int i,c;
c=0;
for(i=0;str1[i]!='\0';i++)
{
++c;
}
for(i=0;str1[i]!='\0';i++)
{
str2[c-i-1]=str1[i];
}
str2[i]='\0';
printf("given string is %s\n", str1);
printf("reversed string is %s\n",str2);
}
void checkpal()
{
char str1[10],str2[10];
int i,c;
if(str2[c-i-1]!= str1[i])
{
printf("not palindrome\n");
}
else
{
printf(" palindrome\n");
}
}


