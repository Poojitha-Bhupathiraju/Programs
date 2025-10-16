#include<stdio.h>
void fun(int a)
{
	if (a==10) return;
	fun (a+1);
	printf("%d",a);
	fun (a+2);
	}
	int main()
	{
		fun (1);
		return 0;
	}
