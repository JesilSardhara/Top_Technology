#include <stdio.h>

int main() {
    char ch;

    printf("enter a value: ");
    scanf("%c", &ch);

    printf("'%c' is ascii is %d \n", ch, ch);

    return 0;
}

