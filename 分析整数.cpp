#include<stdio.h>
int main()
{
    int n;
    int t=0;
    scanf("%d",&n);
    int m=n;
    while(m!=0){
    	t++;
    	m/=10;
	}
	printf("%d\n",t);
	int s[t];
	for(int i=0;i<t;i++){
		s[i]=n%10;
		n/=10;
	}
	for(int i=t-1;i>=0;i--)
	    printf("%d ",s[i]);
	printf("\n");
	for(int i=0;i<t;i++)
	    printf("%d ",s[i]);
    return 0;
}

