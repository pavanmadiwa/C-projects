#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
void main()
{
char str1[10],str2[10];
printf("enter the first string\n");
scanf("%s",str1);
printf("enter the second string\n");
scanf("%s",str2);
char str3[10];
int i,j,k;
i=0;
j=0;
k=0;
while(str1[i]!='\0')
{
str3[k]=str1[i];
i++;
k++;
}
str3[k] = ' ';
k++;
while(str2[j]!='\0')
{
str3[k] = str2[j];
j++;
k++;
}
str3[k]='\0';
printf("first string is %s\n",str1);
printf("second string is %s\n", str2);
printf("concatenated string is %s\n", str3);
}