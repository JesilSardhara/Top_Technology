	#include<iostream>
#include<string.h>
using namespace std;

class School{
	private:
		char name[30];
		int rollno;
	public:
		School(){
			cout<<"enter your name:";
			cin>>name;
			cout<<"enter your roll no:";
			cin>>rollno;
		}
		School(char name1[30],int rollno1){
			strcpy(name,name1);
			rollno = rollno1;
		}
		Student(School &pakko){
			rollno = pakko.rollno;
			strcpy(name,pakko.name);
		}
		~School(){
			printf("\nhlw");
		}
		void display(){
			cout<< "name is:"<<name;
			cout<<"\nroll no:"<<rollno;
		}
};
	


int main(){
	
	School s1;
	s1.display();
	
	School s2("zzeel",33);
	s2.display();
	
	School s3(s1);
	s3.display();
	
	School s4;
	s4.display();
	
	return 0;
}
