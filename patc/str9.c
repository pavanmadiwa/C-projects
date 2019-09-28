#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void mystrcmp(char[],char[]);
void main()
{
 char str1[10];
char str2[10];
printf("enter the first name\n");
scanf("%s", str1);
printf("enter the second name\n");
scanf("%s", str2);
mystrcmp(str1, str2);
getch();
}
void mystrcmp(char str1[], char str2[])
{
int count1, count2;
int i;
count1=0;
i=0;
while(str1[i]!='\0')
{
count1++;
i++;
}
count2=0;
i=0;
while(str2[i]!='\0')
{
count2++;
i++;
}
if(count1!=count2)
{
printf("strings are unequal\n");
}
else
{
i=0;
while(str1[i]!='\0' && str2[i]!=0)
{
if (str1[i]!=str2[i])
{
printf("strings are unequal\n");
getch();
exit(0);
}
else
{
++i;
}
}
printf("strings are equal\n");
}
}

