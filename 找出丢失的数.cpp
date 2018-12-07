#include<stdio.h>
int main()
{
	int i,j,n,m,t,x,k;
    scanf("%d",&m);
    for (i=1;i<=m;i=i+1)
    {  n=0;
       t=0;
	   do
         {  n=n+1;
            scanf("%d",&x);
            t=t+x;
         }
       while (x!=0);
       k=0;
       for (j=1;j<=n;j=j+1)
       k=k+j;
       k=k-t;
       printf("%d\n",k);        
}
    return 0;
}
