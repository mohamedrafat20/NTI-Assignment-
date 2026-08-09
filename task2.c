#include <stdio.h>
int main()
{
    signed int value = 0;
    printf("Enter a number: ");
    scanf("%d", &value);
    printf("signed int size: %zu bytes\n", sizeof(value));
    int topBit = (value >> 31);
    if (topBit & 1)
        printf("MSB of %d is set(1).\n", value);
    else
        printf("MSB of %d is unset (0).\n", value);
    return 0;
}
