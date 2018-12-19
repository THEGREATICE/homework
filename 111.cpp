#include<stdio.h>
int main()
{
	int n,i,temp,s,t; 
	s=0;
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n; i++) 
	a[i] = i+1;
	int m,j,p,q; 
	scanf("%d",&m);
	for(i=0; i<m; i++) 
	{ 
	s=0; 
	scanf("%d %d", &p, &q); 
	if(q>0) 
	{  
	    for(j=0; j<n; j++) 
	    if(a[j]==p)
     	{ 
        	temp= a[j]; 
	        for(t=j; s<q; s++, t++) 
            {
			 a[t] = a[t+1];
			 } 
         	a[t] = temp; 
       	} 
    } 
	else
	{ 
     	q = (-1)*q; 
	    for(j=0; j<n; j++) 
    	if(a[j]==p) 
    	{  
	        temp= a[j]; 
     	    for(t=j; s<q; s++, t-- ) 
    	    {
		      a[t] = a[t-1];
		    }
	        a[t] = temp; 
	    } 
	}  
	} 
	for(i=0; i<n; i++) 
	printf("%d ", a[i]); 	
	return 0;	 
}

