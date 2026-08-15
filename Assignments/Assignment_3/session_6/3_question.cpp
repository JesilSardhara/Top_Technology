#include<iostream>
#include<string>
using namespace std;

class Product{
	public:
    virtual void upload() = 0;
};

class Electronics:public Product{
	public:
		void upload(){
			cout<<"this is Electronic Class"<<endl;
	}
};

class Clothing:public Product{
	public:
		void upload(){
			cout<<"this is Clothing Class"<<endl;
		}
}; 

int main(){
	Clothing c;
	c.upload();
	
	Electronics e;
	e.upload();
	
	
	
	return 0;
}
