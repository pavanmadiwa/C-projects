#include<stdio.h>
void main()
{
struct student
{
int marks,age;
float height;
};
struct student s[3];
int i;
for (i=0; i<=2; i++)
{
printf("enter the marks, age and height\n");
scanf("%d %d %f",&s[i].marks, &s[i].age, &s[i].height);
}
for (i=0; i<=2; i++)
{
printf("\n %d\t%d\t%f\n", s[i].marks, s[i].age, s[i].height);
}
}