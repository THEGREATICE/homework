#include <stdio.h>
int main()
{
	int x, y, n, m, f, c, i, j;
	scanf("%d", &n);
	for (i=1; i<=n; i=i+1)
    {  scanf("%d%d",&x,&y);
    	for (j=0; j<=x&&(3*x-y); j=j+1)
    	{
       	c = j;
	   	m = j+y-2*x;
       	f = 3*x-y-2*j;
       	printf("%d %d %d\n", m, f, c);
		}
       
    }
	return 0;
}
