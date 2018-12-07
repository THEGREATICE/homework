#include<stdio.h>
int main()
{
	int n, y, m, d, i, s;
	n=y=m=d=s=0;
	scanf("%d%d", &n, &y);
	if(y%4==0)
	{
		for(i=1; i<=n; i++)
		{
			scanf("%d%d", &m, &d);
			if(m==1)
			s=d;
			else if(m==2)
			s=31+d;
			else if(m==3)
			s=60+d;
			else if(m==4)
			s=91+d;
			else if(m==5)
			s=121+d;
			else if(m==6)
			s=152+d;
			else if(m==7)
			s=183+d;
			else if(m==8)
			s=214+d;
			else if(m==9)
			s=244+d;
			else if(m==10)
			s=275+d;
			else if(m==11)
			s=305+d;
			else
			s=336+d;
			printf("%d\n", s);	 
		}
    }
    else
    {
    	n=y=m=d=s=0;
    	for(i=1; i<=n; i++)
		{
			scanf("%d%d", &m, &d);
			if(m==1)
			s=d;
			else if(m==2)
			s=31+d;
			else if(m==3)
			s=59+d;
			else if(m==4)
			s=90+d;
			else if(m==5)
			s=120+d;
			else if(m==6)
			s=151+d;
			else if(m==7)
			s=182+d;
			else if(m==8)
			s=213+d;
			else if(m==9)
			s=243+d;
			else if(m==10)
			s=274+d;
			else if(m==11)
			s=304+d;
			else
			s=335+d;
			printf("%d\n", s);	 
		}	
	}
	
return 0;	
}
