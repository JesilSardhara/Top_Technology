#include<iostream>
using namespace std;

class gurubank{
	private:
		float balance = 1000;
		string name;
		float add,totalbalance,withdr,tbalance;
	public:
		void putdata(){
			
			cout<<"enter Your Name:";
			getline(cin,name);
			cout<<"name"<<name;			
			cout<<"\nbalance"<<balance;
		}
		void addbalance(){
			cout<<"\nadd a balance:";
			cin>>add;
			totalbalance = add + balance;
			cout<<"\nYour Balace is:"<<totalbalance;
		}
		void withdraw(){
			cout<<"\nwith draw a balance:";
			cin>>withdr;
			tbalance = totalbalance - withdr;
			cout<<"\nYour Balance is:"<<tbalance;

		}
		
		
		void show(){
			
			
//			cout<<"Your Balace is:"<<totalbalance;
//			cout<<"Your Balance is:"<<tbalance;
		}
};

int main(){
	
	gurubank user;	
	user.putdata();
	user.addbalance();
//	user.show();
	user.withdraw();
	
	return 0;
}
