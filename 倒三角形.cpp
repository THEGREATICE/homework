#include <stdio.h>
int main()
{
    int m, n, i, p, j, k;
	scanf("%d", &m);
	for(i=1; i<=m; i++)
	{
		scanf("%d", &n);
    	for(p=1; p<=n; p++)
    	{
    		for(k=1; k<=p-1; k++) 
        	{
            	printf(" ");   
        	}
        	for(j=p; j<=2*n-p; j++)  
        	{
            	printf("*"); 
        	}
    		printf("\n");  
    	}
    }
	return 0;
}
