#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int i;
	string a[5];
	
	for(i=0;i<5;i++){
		cout<<"enter a string :";
		cin>>a[i];
	}
	
	for(i=0;i<5;i++){
//		cout<<"enter a string";
		cout<<"\nstring is:"<<i<<"  values is:"<<a[i];
	}
	
	
    return 0;
}
