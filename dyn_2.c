#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	int *arr=malloc(n*sizeof(int));
	int i;
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int m;
	scanf("%d",&m);
	arr=realloc(arr,(n+m)*sizeof(int));
	int j=0;
	for (j=0;j<m;j++)
	{
		scanf("%d",&arr[i]);
		i++;
	}
	for (i=0;i<n+m;i++)
	{
		printf("%d ",arr[i]);
	}
}
