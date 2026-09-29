#include<iostream>
using namespace std;

int sum(int a,int b){
	int add = a+b;
	return add;
}

void sub(int a,int b){
	int data;
	data = a-b;
	cout<<"\nSub : "<<data;
}

int main()
{
	cout<<"Sum : "<<sum(20,10);
	cout<<"\nSum : "<<sum(40,30);
	sub(40,20);
	sub(80,30);
	return 0;
}
