#include<stdio.h>

struct time{
	int hourse;
	int minutes;
};
struct moviesshow{
	char movie[30];
	int screen;
	struct time showtime;
};	
int main(){
	struct moviesshow m =
		{ "spiderman_brand_new_day",1,{2,30}};
	 
	printf("Movie name:%s\n",m.movie);
	printf("Screen Nu.:%d\n",m.screen);
	printf("Time:%d H : %d M",m.showtime.hourse,m.showtime.minutes);
	
	return 0;
}
