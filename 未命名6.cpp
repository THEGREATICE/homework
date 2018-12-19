#include<stdio.h>
#include<string.h>
struct student
{
char name[100];
char num[100];
int grade[100];
}stu;
int main()
{


int n,i,h,l,max,min;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%s %s %d",stu[i].name,stu[i].num,&stu[i].grade);
}
max=stu[1].grade;min=stu[n].grade;
for(i=1;i<=n;i++)
{
if(stu[i].grade>=max)
{
max=stu[i].grade;
h=i;
}
if((stu[i].grade<=min)
{
min=stu[i].grade;
l=i;
}
}
printf("%s %s",stu[h].name,stu[h].num);




printf("%s %s",stu[l].name,stu[l].num);
return 0;
}
