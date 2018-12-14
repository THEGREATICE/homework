#include <stdio.h>
int n, a, k;
int getAge(int n)
{
	int age, a1, k1;
	a1 = a;
	k1 = k;
	if(n==1)
		age = a;
	else
		age = getAge(n-1) + k;
	return age;
}

int main()
{
	scanf("%d%d%d", &n, &a, &k);
	if(n<2||n>100||a<=0||a>100||k<=0||k>100)
	{
		printf("Wrong Number\n");
		return 0;
	}
	printf("%d", getAge(n));
	return 0;
 } 
