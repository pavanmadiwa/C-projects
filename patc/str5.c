#include<stdio.h>
#include<conio.h>
#include<string.h>
void mystrcpy(char []);
void main()
{
char str1[10];
printf("enter a name\n");
scanf("%s",str1);
mystrcpy(str1);
getch();
}





void mystrcpy(char str1[])
{
char str2[10];
for(i=0;str1[i]!=0;i++)
{
str2[i]=str1[i];
}
str2[i]='\0';
printf("copied string is %s",str2);
getch();
}

                                                                                       