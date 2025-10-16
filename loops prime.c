#include<stdio.h>
int main()
{
	int N,i,count;
	scanf("%d",&N);
	for(i=1;i<=N;i=i+1)
	{
		if (N%i==0)
		{
			count=count+1;
		}
		}
	if (count<=2)
		{
			printf("It is prime");
		}
		else
		{
			printf("It is not prime");
		}
}
