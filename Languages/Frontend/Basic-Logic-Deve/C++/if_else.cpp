#include<iostream>
using namespace std;

int main(){
	
	int a,b,c;
	
	cout<<"enter a value a:";
	cin>>a;
	
	cout<<"enter a value b:";
	cin>>b;
	
	cout<<"enter a value C:";
	cin>>c;
	
	if(a>b && a>c){
		cout<<"a is big:"<<a;
	}
	else if(b>a && b>c){
		cout<<"b is big:"<<b;
	}
	else{
		cout<<"c is big:"<<c;
	}
	
	return 0;
}
