#include<iostream>
using namespace std;

class Student{
	private:
//		data memeber
		int rollno;
		string name;
	public:
//		member function
		void putData(){
			cout<<"\nEnter your Rollono : ";
			cin>>rollno;
			cout<<"Enter your name : ";
			cin>>name;
		}
		void show(){
			cout<<"\nRollno : "<<rollno;
			cout<<"\nName : "<<name;
		}
};


int main(){
	
	Student user;
	user.putData();
	user.show();
	
	user.show();
	
	Student abi;
	abi.putData();
	abi.show();
	
	
	return 0;
}
