#include<stdio.h>
#include<stdlib.h>
int size=4;
int top=-1;
int s[4];
int element;
void push()
{
if(top == size-1)
{
printf("push not possible");
}
else
{
printf("enter the element\n");
scanf("%d", &element);
++top;
s[top]= element;
}
}
void pop()
{
if(top==-1)
{
printf("pop not possible");
}
else
{
printf("element deleted is %d\n",s[top]);
--top;
}
}
void display()
{
int i;
if(top==-1)
{
printf("display not possible\n");
}
else
{
for( i=top;i>=0;--i)
{
printf("%d", s[i]);
}
}
}
void main()
{
int choice;
while(1)
{
printf("Press 1 to push\n");
printf("Press 2 to pop\n");
printf("Press 3 to display\n");
printf("Press 4 to stop\n");
printf("enter yur choice\n");
scanf("%d", &choice);
switch (choice)
{
case 1: push();
break;
case 2: pop();
break;
case 3: display();
break;
case 4: exit(0);
break;
}
}
}


