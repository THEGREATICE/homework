#include <stdio.h>
int move(int n, char A, char B, char C)
{
	if(n==1)
	{
	  printf("%c->%c\n", A, C);
	}
	else
	{
		move(n-1, A, C, B);
		printf("%c->%c\n", A, C);
		move(n-1, B, A, C);
	}
	return 0;
}

int main()
{
	int n, step, i;
	scanf("%d", &n);
	move(n, 'A', 'B', 'C');
	if(n==1)
	  printf("1");
	else
	{
	  step = 1;
	  for(i=0; i<n; i++)
	  {
		step = 2 * step;
	  }
	  printf("%d", step-1); 
	}
	  
	return 0;
}
