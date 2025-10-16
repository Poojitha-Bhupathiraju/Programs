#include<stdio.h>
int ADD(int x,int y)
{
	return x+y;
}
int main()
{
	int ans=0;
	ans=ADD(10,20);
	printf("%d in main",ans);
	return 0;
}
