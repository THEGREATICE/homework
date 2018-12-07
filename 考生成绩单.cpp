#include<stdio.h>
#include<stdio.h>
#include<string.h>
struct student{
    char name[21];//姓名 
    int sno;//学号 
    double chinese;//语文 
    double english;//数学 
    double math;//英语 
    double sum;//总成绩 
}; 
void quicks(student s[],long l,long r)
{
    if(l < r)
    {
        int i=l,j=r;
        student x;
        memcpy(&x,s+l,sizeof(x));
        while(i<j)
        {
            while(i<j && s[j].sum>=x.sum)
                j--;
            if(i<j)
              memcpy(s+i++,s+j,sizeof(s[i]));  
            while(i<j && s[i].sum<=x.sum)
                i++;
            if(i<j)
            memcpy(s+j--,s+i,sizeof(s[j])); 
        }
        memcpy(s+i,&x,sizeof(s[i])); 
        quicks(s,l,i-1);
        quicks(s,i+1,r);        
    }
}
int main()
{
	long i,n,k,t,m,m1,n1,k1,j;
	scanf("%ld",&n);
	student stu[n+1];
	student x;
    for (i=1;i<=n;i=i+1)
    {
       scanf("%s%d%lf%lf%lf",&stu[i].name,&stu[i].sno,&stu[i].chinese,&stu[i].english,&stu[i].math);
       stu[i].sum=stu[i].chinese+stu[i].english+stu[i].math;
   }
       quicks(stu,1,n);
       k1=0;
      while(k1==0)
       {  k1=1;
	      for (j=1;j<=n-1;j=j+1)
       {k=-1;
        
           if(stu[j].sum==stu[j+1].sum)
           {
            while(k++)
			{ if (int(stu[j].name[k])!=int(stu[j+1].name[k]))
			  break;
            }
            if (int(stu[j].name[k])<int(stu[j+1].name[k]))
            {   memcpy(&x,stu+j,sizeof(x));
                memcpy(stu+j,stu+j+1,sizeof(stu[j]));
                memcpy(stu+j+1,&x,sizeof(stu[j+1]));
                k1=0;
            }
        }
        }
       }
for (i=n;i>=1;i--)
printf("[name:%s,sum:%d,sno:%d]\n",stu[i].name,int(stu[i].sum),stu[i].sno);
    return 0;
}

