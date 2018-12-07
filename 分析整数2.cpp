#include<stdio.h>
int main()
{
    int n,i=0;
    int j=0; 
        scanf("%d",&n);
        if(n<100000)
    {
	int a,b,c,d,e;
	a=n/10000;
	b=n/1000-a*10;
	c=n/100-a*100-b*10;
	d=(n/10)%10;
	e=n%10; 
	while(n)
    {
        i=i*10+n%10;
        n=n/10;
        j++;
    }
    int p,q,r,s,t;
	p=i/10000;
	q=i/1000-p*10;
	r=i/100-p*100-q*10;
	s=(i/10)%10;
	t=i%10; 

    printf("%d \n",j);
    printf("%d %d %d %d %d \n",a,b,c,d,e);
    printf("%d %d %d %d %d \n",p,q,r,s,t);
	}	
    return 0;
}
