#include<stdio.h>
int main()
{
	int n, y, m, d, i, s=0;
	scanf("%d",&n);
	{
		for(i=1; i<=n; i++)
		{
			scanf("%d%d%d",&y, &m, &d);
			switch(m){
			case 12:s+=30;
			case 11:s+=31;
			case 10:s+=30;
		    case  9:s+=31;
		    case  8:s+=31;
		    case  7:s+=30;
		    case  6:s+=31;
		    case  5:s+=30;
		    case  4:s+=31;
		    case  3:
		    	if ((y%100==0&&y%400==0)||y%4==0)
		    	   s+=29;
		    	else 
		    	   s+=28;
		    case  2:s+=31;
		    case  1:s+=d;
			printf("%d\n", s);
			s=0;	
		    }
        }	
   }
return 0;	
}
