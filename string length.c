#include<stdio.h>
#include<ctype.h>
int main()
{
	char Name[10]	int i;
	scanf("%[^\n]s",Name);
	int vowels=0;
	int consonants=0;
	for (i=0;Name[i]!='\0';i++)
	{
		if (Name[i]=='a'||'e'||'i'||'o'||'u')
		{
		vowels=vowels+1;	
		}
		else
		{
		consonants=consonants+1;
		}
	}
		printf("%d",vowels);
		printf("%d",consonants);
	}
	
	
