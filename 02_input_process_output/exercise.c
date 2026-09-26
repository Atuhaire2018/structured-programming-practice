#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val1, val2;
    int sum, prod, dif, qou;
    float rem;

    printf("Enter the first value: \n");
    scanf("%d", &val1);

    printf("Enter the second value: \n");
    scanf("%d", &val2);

    sum = val1 + val2;
    prod = val1 * val2;
    dif = val1 - val2;
    qou = val1 / val2;
    rem = val1 % val2;


    printf("Sum: %d\n", sum);
    printf("Product: %d\n", prod);
    printf("Difference: %d\n", dif);
    printf("Quotient: %d\n", qou);
    printf("Remainder: %.3f\n", rem);
    return 0;
}
