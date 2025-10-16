#include<stdio.h>
float FindAvg(int arr[],int size)
{
	int i,sum=0;
	for(i=0;i<size;i++) sum = sum + arr[i];
	float average = (float)sum/size;
	return average;
	}
	int main()
	{
		int n,i;
		printf("Enter the size of array:");
		scanf("%d",&n);
		int arr[n];
		for (i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
	    float answer=FindAvg(arr,n);
	    printf("%f",answer);
	}
