#include<stdio.h>
#include<string.h>
struct Details
{
	int age;
	char name[12];
};
int main()
{
	struct Details obj1,obj2;
	obj1.age=20;
	strcpy(obj1.name,"Hasini");
	printf("%d %s", obj1.age, obj1.name);
	obj2.age=21;
	strcpy(obj2.name,"Nishitha");
	printf("%d %s", obj2.age, obj2.name);
}
