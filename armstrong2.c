#include<stdio.h>
int main()
{
	int num,onum,r,n=0,sum=0;
	scanf("%d",&num);
	onum=num;
	while (onum!=0)
	{
		onum/=10;
		++n;
	}
	onum=num;
	while (onum!=0)
	{
		r=onum%10;
		sum+=pow(r, n);
		onum/=10;
	}
	if (sum==num)
	{
		printf("%d is an armstrong num\n",num);
	}
	else
	{
	printf("%d is not an armstrong num\n",num);	
	}
}
