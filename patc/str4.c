int mystrlen(char str[])
{
int i,c;
c=0;
for(i=0;str[i]!=0;i++)
{
++c;
}
return c;
}
#include<stdio.h>
#include<string.h>
#include<conio.h>
int mystrlen();
void main()
{
char str[10];
int ans;
printf("enter a name");
scanf("%s",str);
ans=mystrlen(str);
printf("length of string is %d",ans);
getch();
}
