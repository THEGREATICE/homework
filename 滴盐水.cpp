#include <stdio.h>
#include <math.h>
int main()
{
	int n, i, j, t=0, drop, sum, t1, t2;
	float D, VUL, dtemp;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d%d", &VUL, &D);
		if(D==0||VUL==0)
		  break;
		else
		{
			dtemp = VUL/D;
			drop = ceil(dtemp);
			for(j=0; ; j++)
			{
				sum = sum + j;
				if(sum >= drop)
				break;
			}
			t1 = j-1;
			t2 = drop;
			t = t1+t2;
			printf("%d", t);
		}
		
	} 
	return 0;
}
