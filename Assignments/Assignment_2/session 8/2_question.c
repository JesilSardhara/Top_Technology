#include <stdio.h>
#include <string.h>

void addToCart(char cart[][30], int *count, char product[])
{
    strcpy(cart[*count], product);
    (*count)++;

    printf("\nUpdated Cart (Inside Function):\n");

    for(int i = 0; i < *count; i++){
        printf("%d. %s\n", i + 1, cart[i]);
    }
}

int main()
{
    char cart[20][30];
    int count, i;
    char product[30];

    printf("How many products are already in cart: ");
    scanf("%d", &count);

    getchar();   // Remove Enter from input buffer

    for(i = 0; i < count; i++)
    {
        printf("Enter Product %d: ", i + 1);
        gets(cart[i]);
    }

    printf("\nEnter New Product: ");
    gets(product);

    addToCart(cart, &count, product);

    printf("\nCart in Main Function:\n");

    for(i = 0; i < count; i++)
    {
        printf("%d. %s\n", i + 1, cart[i]);
    }

    return 0;
}
