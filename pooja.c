#include<stdio.h>
struct Student
{
	char name[50];
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
 scanf("%d",&student.rollnumber);
 printf("Enter gender : ");
 scanf(" %c",&student.gender);
 printf("enter age: ");
 scanf("%d",&student.age);
 printf("\nStudent Details:\n");
 printf("Name: %s\n",student.name);
 printf("Roll Number: %d\n",student.rollnumber);
 printf("Gender: %c\n",student.gender);
 printf("Age: %d\n",student.age);	
}

