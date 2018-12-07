#include<stdio.h>
int main()
{
	int n, i, a1, a2, a3;
	i=1;
	a1=a2=a3=0;
	scanf("%ld",&n);
	for(i=1; i<=n; i++)
	{
		a1=a1+i;	
	}
	printf("%d\n", a1);

	i=1;
	while(i<=n)
	{
		a2=a2+i;
		i++;
	}
	printf("%d\n", a2);
	
	i=1;
	do
	{
		a3=a3+i;
		i++;
	}while(i<=n);
	printf("%d\n", a3);
	
return 0;
	
}
