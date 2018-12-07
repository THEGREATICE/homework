#include<stdio.h>
#include<math.h>
int main()
{
    long a,b,c,m,k;
    double p,s; 
    scanf("%ld",&k);
    for(m=1;m<=k;m=m+1)
    {  scanf("%ld%ld%ld",&a,&b,&c);
       if ((a+b>c)&&(a+c>b)&&(b+c>a))
       {  p=(double)(a+b+c)/2;
          s=sqrt(p*(p-a)*(p-b)*(p-c));
          printf("%.2lf\n",s);
       }
       else
       printf("error\n");   
    }
 	return 0;
}
