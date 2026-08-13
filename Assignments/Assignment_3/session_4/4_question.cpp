#include <iostream>
using namespace std;

class Socialmediauser{
	public:
	void insta(){
		cout<<"this is Instagram"<<endl;
	}
};

class Youtuber: public Socialmediauser{
	public:
	void youtube(){
		cout<<"this is youtube Chanel of 'CRAZYXYZ'"<<endl;
	}
};

class Gamingyoutuber : public Youtuber{
	public:
	void gaming(){
		cout<<"This is 'TOTAL GAMING Free Fire KING'"<<endl;
	}
};

int main(){
	Gamingyoutuber g;
	g.gaming();
	g.insta();
	g.youtube();
	
	
	
	return 0;
}
