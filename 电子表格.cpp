#include<stdio.h>
long r,c;
    int a[51][51];
void sr(int a[51][51],long h,long h1)
{
	long k;
	for (k=1;k<=c;k=k+1)
	{
		a[0][k]=a[h][k];
		a[h][k]=a[h1][k];
		a[h1][k]=a[0][k];
	}
}
void sc(int a[51][51],long h,long h1)
{
	long k;
	for (k=1;k<=r;k=k+1)
	{
		a[k][0]=a[k][h];
		a[k][h]=a[k][h1];
		a[k][h1]=a[k][0];
	}
}
void dr(int a[51][51],long h)
{
			long k,j;
	for (k=h;k<=r;k=k+1)
	for (j=1;j<=c;j=j+1)
	{
		a[k][j]=a[k+1][j];
	}
r=r-1;
}
void dc(int a[51][51],long h)
{
			long k,j;
	for (k=h;k<=c;k=k+1)
	for (j=1;j<=r;j=j+1)
	{
		a[j][k]=a[j][k+1];
	}
c=c-1;
}
void kr(int a[51][51],long h)
{
		long k,j;
	for (k=r+1;k>=h+1;k=k-1)
	for (j=1;j<=c;j=j+1)
	{
		a[k][j]=a[k-1][j];
	}
	for (j=1;j<=c;j=j+1)
	a[h][j]=0;
r=r+1;
}
void ic(int a[51][51],long h)
{
		long k,j;
	for (k=c+1;k>=h+1;k=k-1)
	for (j=1;j<=r;j=j+1)
	{
		a[j][k]=a[j][k-1];
	}
	for (j=1;j<=c;j=j+1)
	a[j][h]=0;
c=c+1;
}
int main()
{
    long n,m,k,j,p,q,h,h1;
    char a1,b;
    scanf("%ld",&r);
    scanf("%ld",&c);
	for (k=1;k<=r;k=k+1)
	for (j=1;j<=c;j=j+1)
	scanf("%d",&a[k][j]);	
    scanf("%ld",&n);	
	for (k=1;k<=n;k=k+1)
{
	getchar();
    scanf("%c",&a1);
	scanf("%c",&b);
	if (((int)a1==68)&&((int)b==(int)82))
	
	{
	    scanf("%ld",&h);	
	dr(a,h);}
	if (((int)a1==68)&&((int)b==67))
	   {
   	    scanf("%ld",&h);
    dc(a,h);}
if (((int)(a1)==83)&&((int)b==82))
   {
       scanf("%ld%ld",&h,&h1);
   sr(a,h,h1);}
if (((int)a1==83)&&((int)b==67))
   {
       scanf("%ld%ld",&h,&h1);
   sc(a,h,h1);}
if (((int)a1==73)&&((int)b==82))
   {     
   	    scanf("%ld",&h);
   kr(a,h);}
if (((int)a1==73)&&((int)b==67)) 
   {     
   	    scanf("%ld",&h);
   ic(a,h);}
}
	for (k=1;k<=r;k=k+1)
	{
	for (j=1;j<=c;j=j+1)
		printf("%d ",a[k][j]);
		printf("\n");
}
}
