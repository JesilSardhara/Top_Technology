#include<iostream>
using namespace std;


class D{
	public:
		void dataD(){
			cout<<"D Function"<<endl;
		}
};

class A{
	public:
		void data(){
			cout<<"A Function"<<endl;
		}
};

class B : public A{
	public:
		void dataB(){
			cout<<"B Function"<<endl;
		}
};

class C :public B,public D{
	public:
		void dataC(){
			cout<<"C Function"<<endl;
		}
};




int main(){
	C ob;
	ob.data();
	ob.dataC();
	ob.dataB();
	ob.dataD();

	
	B as;
	as.data();
	as.dataB();
	
	
	
}
