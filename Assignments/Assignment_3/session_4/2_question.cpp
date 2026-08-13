#include<iostream>
#include<string.h>
using namespace std;

class Socialmediauser{
	private:
		string username;
		int followers;
	public:
		put(){
			cout<< "enter Your username :";
			cin>>username;
			cout<<"enter Your Followers :";
			cin>>followers;
		}
		displayProfile(){
			cout<< "\nits Your username :"<<username;
			cout<<"\nits Your Followers :"<<followers;
		}
};
class Youtuber : public Socialmediauser{
	
	private:
		string channelname;
		string uploadVideo;
	public:
		putt(){
			cout<<"enter channel name :";
			cin>>channelname;
			cout<<"enter your video title :";
			cin>>uploadVideo;
		}
		displayprofile(){
			cout<<"\nits channel name :"<<channelname;
			cout<<"\nits your video title :"<<uploadVideo;
		}
	
};

int main(){
	Youtuber Y;
	Y.put();
	printf("\n");
	Y.putt();
	printf("\n");
	Y.displayProfile();
	printf("\n");
	Y.displayprofile();
	
	return 0;
}
