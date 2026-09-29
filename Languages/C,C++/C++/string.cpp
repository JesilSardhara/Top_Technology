#include<iostream>
using namespace std;


int main()
{
	
	string str = "Sardhara Jec";
	string data;
//	printf("Name : %s",str);
	cout<<"name : "<<str;
		
	cout<<"\nEnter your Name : ";
//	cin>>str2;
	getline(cin,data);	
	
	if(str == data){
		cout<<"\nsame you are  pass";
	}
	else{
		cout<<"\npls enter valid";
	}
	
	cout<<"\nYour Name : "<<str;
	cout<<"\nYour Name : "<<data;

		
	return 0;
}
