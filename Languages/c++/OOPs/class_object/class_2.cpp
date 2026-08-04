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
			cin.ignore();
			cout<<"Enter your name : ";
//			cin>>name;
			getline(cin,name);
			

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
	

	
	
	return 0;
}
