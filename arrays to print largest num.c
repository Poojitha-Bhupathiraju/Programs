#include<stdio.h>
int main()
{
	int size;
	printf("Enter the size :");
	scanf("%d",&size);
	int i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int n;
	for(i=0;i<size;i++)
	{
		if(n<arr[i])
		{
			n=arr[i];
		}
	}
	printf("%d",arr[i]);
	}
