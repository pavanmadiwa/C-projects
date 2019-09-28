#include<stdio.h>
#include<stdlib.h>
int size=4;
int r=-1,f=0;
int q[4];
int ele;
int count=0;
void insert()
{
if(count==size)
{
printf("insertion not possible\n");
}
else
{
printf("enter the elements\n");
scanf("%d",&ele);
r=(r+1)%size;
q[r]=ele;
++count;
}
}
 
void delete()
{
if (count==0)
{
printf("deletion not possible\n");
}
else
{
printf("element deleted is %d\n",q[f]);
f=(f+1)%size;
--count;
}
}

void display()
{ 
int f1=f;
if(count==0)
{
printf("display not possible\n");
}
else
{
for(int i=1;i<=count;i++)
{
printf("%d\t",q[f1]);
f1=(f1+1)%size;
}
}
}
   

void main()
{
int size=4;
int r=-1,f=0;
int q[4];
int ele;
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
