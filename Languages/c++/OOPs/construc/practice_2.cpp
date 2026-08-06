#include<iostream>
#include<string.h>
using namespace std;

class School{
	private:
		int rollno;
		char name[20];
	public:
		School(){
			cout<<"enter a name:";
			cin>>name;
			cout<<"enter a rollnu:";
			cin>>rollno;
		}
		School(int roll,char name1[30]){
			rollno = roll;
			strcpy(name,name1);
		}
		Student(School &pk){
			rollno = pk.rollno;
			strcpy (name,pk.name);
		}
		~School(){
			printf("\nhlw");
		}
		void display(){
			cout<<"\nname is :"<<name;
			cout<<"\nroll no:"<<rollno;
		}
		
};

int main(){
	
	School s1;
	s1.display();
	
	School s2(7,"hlw");
	s2.display();
	
	School s3(s1);
	s1.display();
	
	School s4;
	s4.display();
}
