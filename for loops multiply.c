#include<stdio.h>
main()
{
	int i,n,stop;
	printf("enter table number");
	scanf("%d",&n);
	printf("enter stop number");
	scanf("%d",&stop);
	for(i=1;i<=stop;i=i+1)
	{
		printf("%d x %d = %d\n",n,i,n*i);
	}
}
