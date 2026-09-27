#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum;

    for(int i=7; i<=100; i+=7){

        printf("%d\n", i);

        sum += i;
    }
        printf("The sum is %d\n",sum);
    return 0;
}
