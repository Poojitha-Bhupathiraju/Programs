#include<stdio.h>
int main()
{
	int N,i,count=0;
	scanf("%d",&N,&i,&count);
	for(i=1;i<=N;i=i+1)
	{
		if(N%i==0)
		{
			printf("%d\n",i);
			count=count+1;
		}
	}
	if (N%2=0)
	{
		printf("It is even");
	}
	else
	{
		printf("It is odd ");
		}
}
