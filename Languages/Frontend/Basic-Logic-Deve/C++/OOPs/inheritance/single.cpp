#include<iostream>
using namespace std;


class A{
	public:
		void data(){
			printf("\nA Function");
		}
};

class B : public A{
	public:
		void dataB(){
			printf("\nB Function");
		}
};



int main(){
	B ob;
	ob.data();
	ob.dataB();
	
	
}
