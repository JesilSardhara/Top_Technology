#include<iostream>
using namespace std;

class Hum{
	protected:
		int mony = 100;
	public:
		void display(){
			cout<<"value of mony : "<<mony;
		}
};
class Bijo : public Hum{
	public:
		void pum(){
			cout<<"\nthis is value of mony:"<<mony;
		}
};

int main(){
	Bijo su;
	su.display();
	su.pum();
}	
