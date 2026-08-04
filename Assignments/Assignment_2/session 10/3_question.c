#include <stdio.h>
#include <string.h>

int main()
{
    char app[20] = "Flipkart";
    char shoppingApp[20];

    strcpy(shoppingApp, app);

    printf("Shopping App: %s", shoppingApp);

    return 0;
}
