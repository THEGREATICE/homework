#include<stdio.h>
struct STU 
{
    int number;//±àºÅ 
    int a1,a2,a3,a4,a5,a6;
    int sum;
	float average;//×Ü³É¼¨
}; 
int main()
{
	int i,k;
	float temp,temp3;
	int temp2,temp4;
	struct STU stu[10];
	for(i=0;i<10;i++)
	{
		stu[i].number = i+1; 
		scanf("%d%d%d%d%d%d",&stu[i].a1,&stu[i].a2,&stu[i].a3,&stu[i].a4,&stu[i].a5,&stu[i].a6);
	    stu[i].sum =stu[i].a1+stu[i].a2+stu[i].a3+stu[i].a4+stu[i].a5+stu[i].a6;
	    stu[i].average =(float)stu[i].sum/6;
	}
	for(i=8;i>=0;i--)
	{
		for(k=0;k<=i;k++)
    	{
          if(stu[k].average<stu[k+1].average)
		  { temp = stu[k].average;
		    temp2 = stu[k].number;
		    stu[k].average = stu[k+1].average;
		    stu[k].number = stu[k+1].number;
		    stu[k+1].average = temp;
		    stu[k+1].number = temp2;
		  }		
	    }
	}
    
   for(i=0;i<10;i++)
   {
	printf("%d %.2f\n",stu[i].number,stu[i].average);
	}
	return 0;
}
