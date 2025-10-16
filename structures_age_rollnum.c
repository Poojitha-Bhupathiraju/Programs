#include<stdio.h>
struct student
{
	char name[10];
	int rollnumber;
	char gender;
	int age;
};
struct Student student;
int main()
{
 printf("Enter student name : ");
 scanf("%s", student.name);
 printf("Enter roll number : ");
 scanf("%d",&student.rollNumber);
 printf("Enter gender (M/F): ");
 scanf(" %c",&student.gender);
 printf("Enter age: ");
 scanf("%d",&student.age);
 printf("\nStudent Details:\n");
 printf("Name: %s\n",student.name);
 printf("Roll Number: %d\n",student.rollNumber);
 printf("Gender: %c\n",student.gender);
 printf("Age: %d\n",student.age);	
}

