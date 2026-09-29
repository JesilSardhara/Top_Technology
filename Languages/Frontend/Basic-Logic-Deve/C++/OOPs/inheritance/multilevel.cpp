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

class C : public B{
	public:
		void dataC(){
			printf("\nC Function");
		}
};


int main(){
	C ob;
	ob.data();
	ob.dataB();
	ob.dataC();
	
	
}
