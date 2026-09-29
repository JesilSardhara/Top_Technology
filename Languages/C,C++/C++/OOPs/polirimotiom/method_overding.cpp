#include<iostream>
using namespace std;

class A{
	public:
	void display(){
		cout<<"\nClass A";
	}
};

class B : public A{
	public:
		void display(){
			cout<<"\nClass B";
		}
};

int main()
{
	B ob;
	ob.display();
	ob.display();
	
//	Scope call
	ob.A::display();
	
	return 0;
}
