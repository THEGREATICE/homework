#include<stdio.h>
void quicks(int s[], int l, int t)
{
    if(l < t)
    {
        int i=l, j=t;
        int x;
        x=s[l];
        while(i<j)
        {
            while(i<j && s[j]>=x)
                j = j-1;
            if(i<j)
                s[i++]=s[j];
            while(i<j && s[i]<=x)
                i = i+1;
            if(i<j)
                s[j--]=s[i];
            
        }
        
        s[i]=x;
        quicks(s,l,i-1);
        quicks(s,i+1,t);        
    }
}
int main()
{
	int i,n,k;
	scanf("%d%d",&n,&k);
	int s[n+1];
    for (i=1;i<=n;i=i+1)
       scanf("%d",&s[i]);   
quicks(s,1,n);

for (i=n;i>=n-k+1;i=i-1)
        printf("%d ",s[i]);
    return 0;
}

