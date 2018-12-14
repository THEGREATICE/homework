#include <stdio.h>
int main()
{
	int n, Z, i, j, s, Z1=0;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &Z);
		s = Z;//Z在for循环中发生了变化，故需要先赋给s保存一下初始值，不然无法比较 
		for(j=0; ; j++)
		{
			Z1 = Z1*10 + Z%10;
			Z = Z/10;
			if(Z==0)
			  break;
		}
		if(Z1==s)
		  printf("yes\n");
		else
		  printf("no\n");
	}
	return 0;
 } 
