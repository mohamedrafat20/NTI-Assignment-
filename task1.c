#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if ((number & 1) == 1)
    {
        printf("The LSB of %d is 1.\n", number);
    }
    else
    {
        printf("The LSB of %d is 0.\n", number);
    }

    return 0;
}
