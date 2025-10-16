#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	switch (ch)
	{
		case 'a':
		   printf("it is A");
		   break;
		   case 'b':
		   	printf("it is B");
			   break;
		case 'c':
			printf("it is C");
			default:
				printf("it is a invalid character");
			   
	}

}
