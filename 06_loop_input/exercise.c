#include <stdio.h>
#include <stdlib.h>

int main()
{
    float principal, rate, interest;
    int days;

    printf("Enter loan principal ( -1 to end): ");
    scanf("%f", &principal);

    while (principal != -1)
    {
    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter term of the loan in days: ");
    scanf("%d", &days);

    interest = principal * rate * days /365;

    printf("The interest charge is $%.2f\n\n", interest);

    printf("Enter loan Principal: ");
    scanf("%f", &principal);
    }

    printf("No more loans to give");




    return 0;
}
