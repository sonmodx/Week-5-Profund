#include<stdio.h>

int main() 
{
	int num[10];
	int i;
	for (int i=0;i<10;i++)
	{
		scanf("%d", &num[i]);
	}
	int min=num[0];
	int max=num[0];
	for (int i=0;i<10;i++)
	{
		if (min>num[i])
		{
			min = num[i];
		}
		if (max<num[i])
		{
			max = num[i];
		}
	}
	printf("min = %d\n",min);
	printf("max = %d\n",max);
	return 0;
}