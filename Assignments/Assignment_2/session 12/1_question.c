#include<stdio.h>

struct	playlist
{
	char title[30];
	char artist[30];
	float duraction;
};
int main(){
	
	struct playlist song = {"mood","i dont know",2.43};
	
	printf("song name :%s\n",song.title);
	printf("song artist :%s\n",song.artist);
	printf("duraction :%.2f minit",song.duraction);
	
	return 0;
}
