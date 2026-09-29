#include<iostream>
using namespace std;
	
class student{
		
	private:
		int rollno;
		char name[30];
	public:
		student(){
			cout<<"enter a name:";
			cin>>name;
			cout<<"enter a rollno:";
			cin>>rollno;
		}
		void display(){
			cout<<"name :"<<name;
			cout<<"Rollno :"<<rollno;
		}
		
};
	
int main(){

	student s1;
	
	s1.display();
	
	return 0;
}
