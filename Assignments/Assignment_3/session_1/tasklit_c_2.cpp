#include <iostream>
#include <string>
using namespace std;

string a[5];

void marktaskdone(int n)
{
    a[n]+=" - DONE"	;
}

int main(){
	int i,n;
	
	for(i=0;i<5;i++){
		cout<<"enter a string :";
		cin>>a[i];
	}
	
	cout<<"enter done number :";
	cin>>n;
	marktaskdone(n -1);
	
	for(i=0;i<5;i++){
//		cout<<"enter a string";
		cout<<"\nstring is:"<<i+1<<"  values is:"<<a[i];
	}
	
	
    return 0;
}
