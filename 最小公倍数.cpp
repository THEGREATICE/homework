#include<stdio.h>

int main()
{
	int i,n,k,t,m,p,q;
	scanf("%d",&t);
    for (i=1;i<=t;i=i+1)
    {
       scanf("%d%d",&p,&q);
       if(q>p)
       {
        	k=p;
	    	p=q;
	    	q=k;
	   }
	   m=p;
	   n=q;
	   k=1;
       while(k!=0)
       {
			k=m%n;
    		m=n;
			n=k;
       }
	   k=p*(q/m);
	
	printf("%d\n",k);
}
    return 0;
}

