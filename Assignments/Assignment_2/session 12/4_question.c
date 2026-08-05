#include<stdio.h>

struct bio{
	char description[30];
	int age;
};

struct InstaProfile {
	char username[30];
	int followers;
	struct bio byo;	
};

int main(){
	
	struct InstaProfile p = {"radha", 7777,{ "This profile is...",77 }};
	
	printf("Username :%s\n",p.username);
	printf("Username :%d\n",p.followers);
	printf("Username :%s\n",p.byo.description);
	printf("user age :%d\n",p.byo.age);

	
	return 0;
}
