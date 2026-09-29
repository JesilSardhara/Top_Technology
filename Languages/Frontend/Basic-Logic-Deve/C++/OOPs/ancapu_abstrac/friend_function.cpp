#include<iostream>
using namespace std;

class Mohit{
	private:
		int mony = 1000;
	public:
		void display(){
			cout<<"amount is:"<<mony;
		}
	friend void jamnagar(Mohit bha);

};

void jamnagar(Mohit bha){
	cout<<"\ni need mony:"<<bha.mony;
}
int main(){
	
	Mohit cv;
	cv.display();
	jamnagar(cv);
	
	return 0;
}
