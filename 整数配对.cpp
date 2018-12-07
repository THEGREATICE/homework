#include <stdio.h>
#include <string.h>
int main ()
{
	struct Candidate {
       char name[10]; //´¿×ÖÄ¸ 
       int count;
    }; 
    struct Candidate C[3],QQ[100],Ct;
    int m,n,k; 
    for(m=0;m<3;m++)
    {
    	scanf("%s",&C[m].name);
    }
    for(k=0;k<100;k++)
    {
    	scanf("%s",QQ[k].name);
		if(strcmp(QQ[k].name,"END")==0)
		    break;
		else
		{
			for(n=0;n<3;n++)
        	{
    	    	if(strcmp(QQ[k].name,C[n].name)==0)
    		    {
    		    	C[n].count=C[n].count+1;
    			    k=k-1;
    			    break;
    			}
	    	}
		}
	}
	for(m=0;m<3;m++)
	{
		for(n=0;n<2;n++)
		{
			if(strcmp(C[n].name,C[n+1].name)>0)
		    {
		    	Ct=C[n];
			    C[n]=C[n+1];
			    C[n+1]=Ct;
		    }
		}
	}
    for(m=0;m<3;m++)
    {
    	printf("%s:%d\n",C[m].name,C[m].count);
    }
	printf("QQ:%d",k);	
	return 0;
}
