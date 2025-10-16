#include<stdio.h>
int main()
{
	float speed,time,distance;
	scanf("%f %f",&speed,&time);
    distance=speed*time;
	printf("%.2f meters\n",distance);
}
