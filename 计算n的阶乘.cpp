#include <stdio.h>
int factorial(int n)
{
	if(n<0)
	{
		printf("Input Error\n");
		return 0;
	}
	else if(n==0 || n==1)
	{
		result = 1;
	}
	else
	{
		result = factorial(n-1)*n;
	}
	return result;
} 
int main(){
	int n = 5;
	printf("%dµÄ½×³Ë=%d", n, factorial(n));
	return 0;
	
extern int result;		
	
}

