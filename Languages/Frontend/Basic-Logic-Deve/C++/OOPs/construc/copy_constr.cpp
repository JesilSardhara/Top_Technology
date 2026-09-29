#include<iostream>
#include<string.h>
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
		
		student(const char name1[30],int roll){
			strcpy(name,name1);
			rollno = roll;
		}
		
		
		
		
		void display(){
			cout<<"name :"<<name<<endl;
			cout<<"Rollno :"<<rollno<<endl;
		}
		
};
	
int main(){

	student s1;	
	s1.display();
	
	student s2("jeet",3);	
	s2.display();
	
	student s3(s2);
	s3.display();
	
	
	return 0;
}
