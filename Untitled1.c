#include<stdio.h>
#include<math.h>
main()
{
	int a=2,b=3,c=4;
	int s=a+b+c/2;
	int result=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("%d",result);
}
