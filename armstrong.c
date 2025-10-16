#include<stdio.h>
#include<math.h>
int main()
{
	int n,rem;
	scanf("%d",&n);
	while(n>0)
	{
		n=n%10;
		rem=rem+pow(n,3);
		n=n/10;
		}
	printf("%d",rem);
	}
