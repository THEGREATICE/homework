#include<stdio.h>
struct STU
{
    char name[21];//����
    int sno;//ѧ��
    double chinese;//����
    double english;//Ӣ��
    double math;//��ѧ
    double sum;//�ܳɼ�
}; 
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,temp;
	struct STU stu[n];
	for(i=0;i<=n;i++)
	{
		scanf("%s %d %d %d %d",&stu[i].name,&stu[i].sno,&stu[i].chinese,&stu[i].english,&stu[i].math);
	    stu[i].sum =stu[i].chinese+stu[i].english+stu[i].math;
	    
	}
	for(i=n-2;i>=0;i--)
	{
		for(j=0;j<=i;j++)
    	{
          if(stu[j].sum<stu[j+1].sum)
		  { temp = stu[j].sum;
		    stu[j].sum = stu[j+1].sum;
		    stu[j+1].sum = temp;
		  }		
	    }
	}
   for(i=0;i<=0;i++){
	printf("[name:%s,sum:%d,sno:%d]",stu[i].name,stu[i].sum,stu[i].sno);
	}
	return 0;
}
