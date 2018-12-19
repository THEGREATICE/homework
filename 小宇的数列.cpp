#include <stdio.h>
#include <string.h>
int find(int n, int a, int k)
{
	if (n==1)
	return a;
	return find(n-1, a, k) + k;
}
int main()
{
	int i, k, h1, h2, h3;
	int a[6];
	k=0;
	for(i=1; i<=5; i=i+1)
	{
		scanf("%ld", &a[i]);
		if(a[i]!=0)
		k=1;
	 }
	while(k==1)
	{
		h1=0;
		h2=0;
		h3=0;
		if((a[1]+a[5]==a[2]+a[4])&&(a[1]+a[5]==2*a[3]))
		  h1=1;
		if((a[1]*a[5]==a[2]*a[4])&&(a[1]*a[5]==a[3]*a[3]))
		  h2=1;
		if((a[3]==a[1]+a[2])&&(a[4]==a[2]+a[3])&&(a[5]==a[3]+a[4]))
		  h3=1;
		  
		if(h1==1)
		{
			printf("case one\n");
			for(i=1; i<=5; i++)
			printf("%ld ", a[i]+5*(a[2]-a[1]));
			printf("\n");
		}  
		if(h2==1)
		{
			printf("case two\n");
			for(i=1; i<=5; i++)
			printf("%ld ", a[i]*(a[2]/a[1])*(a[2]/a[1])*(a[2]/a[1])*(a[2]/a[1])*(a[2]/a[1]));
			printf("\n");
		}  
		if(h3==1)
		{
			a[1]=a[4];
			a[2]=a[5];
			printf("case three\n");
			for(i=1; i<=5; i=i+1)
			{
				a[0]=a[1]+a[2];
				a[1]=a[2];
				a[2]=a[0];
				printf("%ld ", a[0]);
			}
			printf("\n");
		}  
		k=0;
		for(i=1; i<=5; i=i+1)
		{
			scanf("%ld ", &a[i]);
			if(a[i]!=0)
			k=1;
		}
	} 
	printf("Wrong Number");	
	return 0; 
}
