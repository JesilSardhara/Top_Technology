/* Zomato
*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	
	const float GST  = 18;
	float price = 999;
	float finalprice;
	
	finalprice =price + (price * GST / 100);
	
	printf("Product Final Price is : %.2f\n",finalprice);
	
	
	return 0;
}
