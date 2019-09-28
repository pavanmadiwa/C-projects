#include<stdio.h>
void main()
{
int  n;
int i=0;
int rev = 0;
int temp,rem;
printf("enter the 6 digit no\n");
scanf("%d",&n);
temp == n;
while(n!=0)
{
rem = i%10;
rev = (rev*10)+rem;
i=i/10;
}
if(temp == rev)
{
printf("palindrome\n");
}
else
{
printf("not a palindrome\n");
}
}
