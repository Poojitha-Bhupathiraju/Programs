#include<stdio.h>
#include<string.h>
void CountCalicute(char name[])
{
	int i;
	int Uppercount=0,Lowercount=0,Digitcount=0;
	for (i=0;i<strlen(name);i++)
	{
		if(name[i] <= 'Z' && name[i] >= 'A')
		{
			Uppercount++;
		}
		if(name[i] <='z' && name[i] >= 'a')
		{
		 Lowercount++;	
		}
		if(name[i] <= '9' && name[i] >='0')
		{
			Digitcount++;
		}
	}
}
int main()
{
	char string[10];
	scanf("%s",string);
	CountCalicute(string);
	}	
	
