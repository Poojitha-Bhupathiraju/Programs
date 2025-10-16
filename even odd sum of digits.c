#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int c=0, e=0, o=0;
	int i,sum=0;
	for(i=n;i>0;i/=10)
	{
		c+=1;
		int digits =i%10;
		sum+=digits;
		if(digits%2==0)
		{
			e+=1;
		}
		else
		{
			o +=1;
			}
		}
		
		printf("number of digits : %d\n",c);
		printf("number of even digits : %d\n",e);
		printf("number of odd digits : %d\n",o);
		printf("sum : %d",sum);
	}

