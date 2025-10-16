#include<stdio.h>
int main()
{
	int marks[5],i,total=0;
	float average;
	for (i=0;i<5;i++)
	{
		scanf("%d" ,&marks[i]);
		total+=marks[i];
	}
	average=total/5.0;
	printf("%d\n",total);
	printf("%.2f\n",average);
}

