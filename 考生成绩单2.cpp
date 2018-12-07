#include <string.h>
#include <stdio.h>
int main ()
{
	int N, k, t;
    scanf("%d\n",&N);
    struct student{
    char name[21];//姓名
	int sno;//学号
    double chinese;//语文
    double english;//英语
    double math;//数学
    double sum;//总成绩
    };
    struct student stu[N],stut;
    for(k=0; k<N; k++)
    {
        scanf("%s%d%lf%lf%lf",&stu[k].name,&stu[k].sno,&stu[k].chinese,&stu[k].english,&stu[k].math);
    	stu[k].sum=stu[k].chinese+stu[k].english+stu[k].math;
	} 
	for(k=0; k<N; k++)
	{
		for(t=0; t<N-1; t++)
		{
			if(stu[t].sum<stu[t+1].sum)
			{
				stut=stu[t];
				stu[t]=stu[t+1];
				stu[t+1]=stut;
			}
		}
	}
	for(k=0; k<N; k++)
	{
		for(t=0; t<N-1; t++)
		{
			if(stu[t].sum==stu[t+1].sum)
			{
				if(strcmp(stu[t].name,stu[t+1].name)>0)
		    	{
			    	stut=stu[t];
				    stu[t]=stu[t+1];
				    stu[t+1]=stut;
			    }
			}
		}
	}
	for(k=0; k<N; k++)
    {
        printf("[name:%s,sum:%g,sno:%d]\n",stu[k].name,stu[k].sum,stu[k].sno);
	} 	
	return 0;
}
