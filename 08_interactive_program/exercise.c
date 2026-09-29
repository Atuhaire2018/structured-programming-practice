#include <stdio.h>
#include <stdlib.h>

int main()
 {
    int prod_num = 0;
    int quantity = 0;
    float total = 0.0;
    float price = 0.0;

    printf("Product   Retail Price\n");
    printf("1         $2.98\n");
    printf("2         $4.50\n");
    printf("3         $9.98\n");
    printf("4         $4.49\n");
    printf("5         $6.87\n");
    printf("0         TOTAL/Stop\n\n");

    printf("Enter product number (0 to end): \n");
    scanf("%d", &prod_num);

    while (prod_num != 0) {

        switch (prod_num) {
            case 1: price = 2.98;
            break;

            case 2: price = 4.50;
            break;

            case 3: price = 9.98;
            break;

            case 4: price = 4.49;
            break;

            case 5: price = 6.87;
            break;

            default:
                printf("Invalid product number.\n");
                printf("Enter product number (0 to end): \n");
                scanf("%d", &prod_num);
                continue;
        }

        printf("Enter quantity sold: \n");
        scanf("%d", &quantity);

        total += price * quantity;

        printf("Enter product number (0 to end): \n");
        scanf("%d", &prod_num);
    }

    printf("\nTotal retail value of all sales: $%.2f\n", total);

    return 0;
}

