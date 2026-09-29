#include <stdio.h>

int main() {
    int rows = 5; // Change this value to adjust the height

    for (int i = 1; i <= rows; i++) {
        // Loop to print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Loop to print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }
    return 0;
}

