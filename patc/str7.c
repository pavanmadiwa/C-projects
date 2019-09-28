

#include<stdio.h>
#include<conio.h>
void mystrrev(char []);
void main()
{
 char str1[10];
printf("enter a str\n");
scanf("%s",str1);
mystrrev(str1);
getch();
}
void mystrrev(char str1[])
{
char str2[10];
int i,c;
c=0;
for(i=0;str1[i]!=0;i++)
{
++c;
}
for(i=0; str1[i]!=0;i++)
{
str2[c-i-1]=str1[i];
}
str2[i]='\0';
printf("original string is %s\n",str1);      
printf("reversed string is %s\n",str2);
}                                                                        