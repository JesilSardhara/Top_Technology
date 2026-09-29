#include<iostream>
using namespace std;

class A{
	public:
		void dataA(){
			cout<<"A Function";
		}
};
class B{
	public :
		void dataB(){
			cout<<"\nB Function";
		}
};
class C :public A, public B{
	public :
		void datac(){
			cout<<"\nC Functon";
		}
	
};

int main(){
	C ob;
	ob.dataA();
	ob.dataB();
	ob.datac();
	
	return 0;
}
