#include<stdio.h>
#include<string.h>
struct STU
	{
		char name[10];
		char id[111];
		int score[111];
	};
 
int main()
{
	int n, i, j, k, temp1, temp2, temp3;
	scanf("%d", &n);
	struct STU stu[n];
	for(i=0; i<n; i++)
	{
		scanf("%c", &stu[i].name);
		scanf("%d", &stu[i].id[i]); 
		scanf("%d", &stu[i].score[i]);	
	}
	for(i=n; i>=0; i--)
	{
		for(j=0; j<=i; j++);
		{
			if(stu[j].score[j]<stu[j].score[j+1])
			{
				temp1 = stu[j].score[j];
				stu[j].score[j] = stu[j].score[j+1];
				stu[j].score[j+1] = temp1;
				
				temp2 = stu[j].id[j];
				stu[j].id[j] = stu[j].id[j+1];
				stu[j].id[j+1] = temp2;
				
				temp3 = stu[j].name[j];
				stu[j].name[j] = stu[j].name[j+1];
				stu[j].name[j+1] = temp3;
			}	
		}	
	}
	for(i=0; i<n; i++)
	{
		printf("\n%s %s %s\n", stu[i].id, stu[i].name, stu[i].score);
	}
		
	return 0;
}

