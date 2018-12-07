#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    long x,y,z,n,i,j,max,m,b;
    double output;
    scanf("%ld",&n);
    int a[n];
    char number[n][100];
    b=0;
    max=-1;
    for (i=1;i<=n;i=i+1)
    {  scanf("%s",&number[i]);
	   scanf("%ld%ld%ld",&x,&y,&z);
	   output=(double)(x+y+z)/3;
	   printf("%.2lf\n",output);
       if (x+y+z==max)
       {   
         b=b+1;
         a[b]=i;
       }
       if (x+y+z>max)
       { 
         b=1;
         a[b]=i;   
		 max=x+y+z;  
       }   
    }
    output=(double)max/3;
    for (i=1;i<=b;i=i+1)
    { 
	   printf("%s %.2lf\n",number[a[i]],output);
    }
    return 0;
}

