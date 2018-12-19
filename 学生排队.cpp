#include <stdio.h>
int main()
{
	int n, m, p, q, i, j, k, t, temp;
	
	scanf("%d", &n);
	int seq[n];
	for(i=0; i<n; i++)
	{
		seq[i]=i+1;	
	} 
	
	scanf("%d", &m);
	for(j=0; j<m; j++)
	{
		scanf("%d%d", &p, &q);	
		if(q>0)
		{
			for(k=0; k<q; k++)
			{
				temp=seq[p];
				seq[p]=seq[p+1];
				seq[p+1]=temp;
			}
		}
		else
		{
			for(k=0; k<-q; k++)
			{
				temp=seq[p];
				seq[p]=seq[p-1];
				seq[p-1]=temp;
			}
		}
	}
	
	for(t=0; t<n; t++)
	{
		printf("%d ", seq[t]);
	}
	return 0;
 } 
