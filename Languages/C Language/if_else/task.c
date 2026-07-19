#include<stdio.h>

int main(){
	
	int a,b,c,m,mark;
	
	printf("enter marks of subject\n");
	printf("enter english mark\n");
	scanf("%d",&a);
	printf("enter maths marks\n");
	scanf("%d",&b);
	printf("enter science mark\n");
	
	scanf("%d",&c);

	if(a <=100 && b<=100 && c<=100 && a >=0 && b >=0 && c >=0){
		m = a+b+c;
		mark = m/3;
	
		if (mark <= 100 && mark >=70 ){
			printf("A Grade %d",mark);
		}
		else if(mark >=50 && mark<=69){
			printf("B grage%d",mark);
		}
		else if(mark>=35 && mark<=68){
			printf("c grade %d",mark);
		}
		else{
			printf("fail%d",mark);
		}
	}
	else{
		printf("invalid marks%d",mark);
	}
	
	 
	 
	return 0;
}
