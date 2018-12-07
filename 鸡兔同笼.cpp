#include<stdio.h>
int main()
{
    long x,y,n,a,b;
    int c;
    scanf("%ld",&n);
    for (a=1;a<=n;a=a+1)
    {  scanf("%ld%ld",&x,&y);
       c=0;
       for (b=1;b<=x;b=b+1)
       if (2*b+4*(x-b)==y) 
       { c=1;
         printf("%ld %ld\n",b,x-b);
       }
       if (c==0)
       printf("error\n");
    }
    return 0;
}


