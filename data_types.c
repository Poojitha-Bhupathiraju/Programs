#include<stdio.h>
int main()
{
	int integer;
	float floating;
	char character;
	char string[100];
	scanf("%d %f %c %s",&integer,&floating,&character,string);
	printf("integer:%d\n",integer);
	printf("float:%.2f\n",floating);
	printf("character:%c\n",character);
	printf("string:%s\n",string);
}
