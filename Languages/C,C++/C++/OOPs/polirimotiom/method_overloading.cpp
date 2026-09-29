#include<iostream>
using namespace std;

class Over{
	public:
		void display(int x){
			cout<<"\nX : "<<x;
		}
		void display(int x, int y){
			cout<<"\nsum : "<<x+y;
		}
};

int main()
{
	Over ob;
	ob.display(34);
	ob.display(24);
	ob.display(50,20);
		
	return 0;
}
