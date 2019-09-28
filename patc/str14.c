#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
void main()
{
char str[20];
int i;
int vowcnt, consocnt, sscnt;
printf("enter the name\n");
scanf("%s",str);
vowcnt=0;consocnt=0;sscnt=0;
while(str[i]!=0)
{
if((str[i]>='A' && str[i]<='Z')|| (str[i]>='a' && str[i]<='z'))
{
if(str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U' || str[i]=='a'|| str[i]=='e' || str[i]=='i'|| str[i]=='o'|| str[i]=='u')
{
++vowcnt;
}
else
{
++consocnt;
}
}
else 
{
sscnt++;
}
++i;
}
printf("no of vowels is %d\n", vowcnt);
printf("no of consonent is %d\n", consocnt);
printf("no of ss is %d\n", sscnt);
}
