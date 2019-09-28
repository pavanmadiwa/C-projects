#include<stdio.h>
#include<stdlib.h>
int size=4;
int r=-1,f=0;
int q[4];
int ele;
void insert()
{
if(r==size-1)
{
printf("insertion not possible\n");
}
else
{
printf("enter the elements\n");
scanf("%d",&ele);
++r;
q[r]=ele;
}
}
 
void delete()
{
if (r==-1||f>r)
{
printf("deletion not possible\n");
}
else
{
printf("element deleted is %d\n",q[f]);
++f;
}
}

void display()
{
if(r==-1||f>r)
{
printf("display not possible\n");
}
else
{
for(int i=f;i<=r;i++)
{
printf("%d\t",q[i]);
}
}
}
   

void main()
{
int choice;
while(1)
{
printf("Press 1 for insert\n");
printf("Press 2 for delete\n");
printf("Press 3 for display\n");
printf("press 4 for stop\n");
printf("enter yur choice\n");
scanf("%d", &choice);
switch(choice)
{
case 1:insert();
break;
case 2:delete();
break;
case 3:display();
break;
default:exit(0);
break;
}
}
}
