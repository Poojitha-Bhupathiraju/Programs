#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[100];
	int i,uppercase=0,lowercase=0,digits=0,vowels=0,consonants=0;
	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++)
	{
	if (isupper(s[i]))
	{
	uppercase++;
}
	if (islower(s[i]))
	{
	lowercase++;
}
	if (isdigit(s[i]))
	{
	digits++;
}
	if (s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
	{
	vowels++;
}
	else if (isalpha(s[i]))
	{
	consonants++;
}
}
	printf("%d %d %d %d %d\n",uppercase,lowercase,digits,vowels,consonants);
}
