#include<stdio.h>
int main()
{
	int N=0, num=0, i;
	float sum=0, avg=0;
	scanf("%d", &N);
	for(i=0; i<N; i++)
	{
		scanf("%d", &num);
		sum = sum+num;
	}
	avg = sum/N;
	printf("%.2f", avg);
	return 0;
}

