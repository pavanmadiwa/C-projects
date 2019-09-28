#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
 char str1[10];
char str2[10];
printf("enter the name\n");
scanf("%s", str1);
int count,i;
count=0;
i=0;
while(str1[i]!='\0')
{
count++;
i++;
}
i=0;
while(str1[i]!='\0')
{
str2[count-i-1]=str1[i];
i++;
}
str2[i]='\0';
i=0;
while(str1[i]!='\0' && str2[i]!='\0')
{
if (str2[i]!=str1[i])
{
printf("not a pallindrome\n");
getch();
exit(0);
}
else
{
++i;
}
}
printf("palindrome\n");
}




