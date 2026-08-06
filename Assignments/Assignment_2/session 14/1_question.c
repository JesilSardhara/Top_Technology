#include <stdio.h>
#include<conio.h>


int main() {
    char items[3][20] = {"Pizza", "Burger", "Sandvich"};
    int prices[3] = {299, 90, 110};
    int total = 0;
    int i;

    for (i = 0; i < 3; i++) {
        total += prices[i];
    }

    printf("Total price is: %d\n", total);

    return 0;
}
