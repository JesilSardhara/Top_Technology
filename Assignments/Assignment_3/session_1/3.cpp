#include<iostream>
#include<string.h>
using namespace std;

class Task{
	private:
		char name[20];
		bool isdone;
	public:
		
	void data(){
		cout<<"enter a Your assignment name :";
		cin>>name;
	}
	void TTask(){
		
		isdone = false;
	}
	void markdone(){
		isdone = true;
	}
	
	void display(){
		cout<<"Task :"<<name;
		if(isdone){
			cout<<"\nstatus : Done"<<endl;
		}
		else{
			cout<<"  status : pending";
		}
	}
			
};

int main(){
	
	Task t;
	t.data();
	t.TTask();
	t.markdone();
	t.display();
	
}
