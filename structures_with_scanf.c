#include<stdio.h>
struct Details
{
	int age;
	char name[12];
};
int main()
{
	struct Details obj1,obj2;
	scanf("%d",&obj1.age);
	scanf("%s",obj1.name);
	printf("%d %s",obj1.age,obj1.name);
	
	scanf("%d",&obj2.age);
	scanf("%s",obj2.name);
	printf("%d %s",obj2.age,obj2.name);
}
