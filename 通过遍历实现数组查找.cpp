#include <stdio.h>
int getIndex(int arr[5], int value)
{
	int i;
	for(i=0; i<5; i++)
	{
		if(arr[i] == value)
		{
			return i;
		}
	}
	return -1; 
}

int main()
{
	int arr[5] = {22,12,19,38,17};
	int value = 38;
	int index = getIndex(arr, value);
	if(index!=-1)
	{
		printf("%d�������д��ڣ��±�Ϊ��%d\n", value, index);
	}
	else
	{
		printf("%d�������в�����\n", value);
	}
	return 0;
}
