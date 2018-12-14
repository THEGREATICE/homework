#include <stdio.h>
int main()
{
	int n, N, i, j, k, d=1, r, s;
	int num[777];
	scanf("%d", &n);
	for(k=0; k<n; k++)
	{
		scanf("%d", &N);
		while(N/10 != 0)
		{
			d++;
			N = N/10;
		}		 
		for(i=0; i<d; i++)
		{
			num[i] = N % 10^(d-i);
			N = N-10*(d-i);
			 
		}
		if(d%2 == 0)
		{
			for(j=0; j<(d/2); j++)
			{
				if(num[j] == num[d/2-j+1])
				printf("yes\n");
				else 
				printf("no\n");
			}
		}
		else
		{
			for(j=0; j<((d+1)/2); j++)
			{
				if(num[j] == num[(d+1)/2-j+1])
				printf("yes\n");
				else 
				printf("no\n");
			}
		}
		}
	
	return 0;
}
