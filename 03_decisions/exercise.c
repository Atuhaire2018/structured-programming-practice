#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value;

    printf("Enter Value: \n");
    scanf("%d", &value);

    if (value % 2 == 0)
    {
        printf("It's Even ", value);
    }
    else
    {
        printf("It's Odd ", value);
    }
    return 0;
}
