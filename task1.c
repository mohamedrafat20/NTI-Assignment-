#include <stdio.h>
int main()
{
    signed int value = 0;
    printf("Enter a number: ");
    scanf("%d", &value);
    if (value & 1)
        printf("LSB of %d is set(1).\n", value);
    else
        printf("LSB of %d is unset (0).\n", value);
    return 0;
}
