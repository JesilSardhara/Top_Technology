#include<stdio.h>

void french();
void indian();
//void demo();
//void by();
//
//int main(){
//	
//	demo();
//	by();
//	
//	return 0;
//}

int main(){
	
	int a;
	printf("you franch  to f and you indian to i write :");
	scanf("%ch",&a);
	
	if (a == 'i'){
		indian();
	}
	
	else{
		french();
	}
	
	return 0;
}


void indian(){
	printf("you are a indian");
}


void french(){
	printf("you are a franch");
}

//void by(){
//	printf("good by\n");
//}
