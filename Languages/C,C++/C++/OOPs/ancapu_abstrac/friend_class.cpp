#include<iostream>
using namespace std;

class Mota{
	
	private:
		int mony:5000;
	public:
		void display(){
			cout<<"mony :"<<mony;
		}
		friend class Chota;
};
class Chota:public Mota{
	public:
		void bachha(Mota m){
			cout<<"mony"<<m.mony;
		}
};

int main(){
	Mota j;
	Chota s;
	s.display();
	s.bachha(j 	);
	
	return 0;
}
