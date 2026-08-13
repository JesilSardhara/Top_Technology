#include <iostream>
using namespace std;

class Socialmediauser{
	public:
	void insta(){
		cout<<"this is Instagram"<<endl;
	}
};

class Youtuber :public Socialmediauser{
	public:
	void youtube(){
		cout<<"this is youtubce Chanel of 'CRAZYXYZ'"<<endl;
	}
};

class Gamingyoutuber :public Socialmediauser{
	public:
	void gaming(){
		cout<<"This is 'TOTAL GAMING Free Fire KING'"<<endl;
	}
};

int main(){
	Youtuber y;
	y.insta();
	y.youtube();
	
	Gamingyoutuber g;
	g.gaming();
	g.insta();
	
	
	return 0;
}
