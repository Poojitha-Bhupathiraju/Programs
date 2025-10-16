#include<stdio.h>
int main()
{
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	printf("\nBitwise AND(&):%d\n",num1 & num2);
	printf("Bitwise OR(|):%d\n",num1 | num2);
	printf("Bitwise XOR(^):%d\n",num1 ^ num2);
	printf("Bitwise NOT(~):%d\n",~num1);
	printf("Left shift(<<):%d\n",num1 << num2);
	printf("Right shift(>>):%d\n",num1 >> num2);
	
}
