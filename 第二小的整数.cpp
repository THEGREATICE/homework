#include<stdio.h>
int main()
{  long x,y,n,p,q,min1,min2;
    int k;
    scanf("%ld",&n);
    for (p=1;p<=n;p=p+1)
    { scanf("%ld",&x);
    k=0;
      for (q=1;q<=x;q=q+1)
      {  scanf("%ld",&y);
         if (q==1)
         { min1=y;
           min2=y;
 	   }
	if((k==0)&&(y>min2))
	{
	min2=y;
          k=1;
}
         if(y<min1)
         {  min2=min1;
		    min1=y;
		    k=1;
		 }
		 if ((y>min1)&&(y<min2))
		{ min2=y;
	     k=1;
		 }
      }
      if (k==0)
      printf("ERROR\n");
      else
      printf("%ld\n",min2);
    }

    return 0;
}

