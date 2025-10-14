#include<iostream>
namespace MyNamespace {
	int value = 42;
	void show() {
		std::cout<<"Value"<<value<<std::endl;
	}
}
int main()
{
	std::cout<<MyNamespace::value<<std::endl;
	MyNamespace::show();
}
