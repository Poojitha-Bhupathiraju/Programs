#include<stdio.h>
int main()
{
	int N,firsttwodigits,lasttwodigits,pairsum;
	scanf("%d",&N);
	firsttwodigits=N/10;
	lasttwodigits=N%100;
	pairsum=firsttwodigits+lasttwodigits;
	printf("pairsum of %d is %d + %d = %d\n",N,firsttwodigits,lasttwodigits,pairsum);
}
