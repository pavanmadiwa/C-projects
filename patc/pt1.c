#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void swap(int *,int *);
void main()
{
int a,b;
printf("enter 2 nos\n");
scanf("%d%d", &a, &b);
swap(&a,&b);
printf("%d %d",a,b);
getch();
}
void swap(int *p, int *q)
{
int temp;
temp = *p;
*p = *q;
*q = temp;
}
