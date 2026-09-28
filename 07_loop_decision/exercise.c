#include <stdio.h>
#include <stdlib.h>

int main()
{
    int acc,limit,balance,current_limit,customer=1;


    while(customer<=3)
    {
        printf("Enter Customer's account number: \n");
        scanf("%d", &acc);

        printf("Enter Customer's limit before the recession: \n");
        scanf("%d", &limit);

        printf("Enter Customer's current balance: \n");
        scanf("%d", &balance);

        current_limit= limit / 2;

        printf("The new credit limit is %d\n", current_limit);

        if (balance > current_limit)
        {
            printf("Balance exceeds current limit\n\n");
        }
        else
        {
            printf("Balance is within the current limit range\n\n");
        }

        ++customer;
    }
    return 0;
}
