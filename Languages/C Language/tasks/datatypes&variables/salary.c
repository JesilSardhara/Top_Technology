#include <stdio.h>

int main() {
    int salary,hra,da,ts;

    printf("enter a salary: ");
    scanf("%c", &salary);
//    printf("enter a value: ");
//    scanf("%c", &ch);
	hra = salary * 0.20;
	da = salary * 0.87;
//	printf("%d",hra);
	ts = salary + hra + da;

    printf("\ntotal salary: %d \n", ts);

    return 0;
}

