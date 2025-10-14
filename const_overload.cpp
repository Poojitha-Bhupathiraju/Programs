#include<iostream>
using namespace std;
class Student{
	private:
		int rollno;
		string name;
		public:
			Student(){
				rollno=0;
				name="Unknown";
			}
			Student(int r,string n){
				rollno=r;
				name=n;
			}
			void display(){
				cout<<"Roll No:"<<rollno<<",Name:"<<name<<endl;
			}
};
int main(){
	Student s1;
	Student s2(101,"Ravi");
	s1.display();
	s2.display();
	return 0;
}
