#include <stdio.h>
int main()
{
    signed int value = 0;
    unsigned int pos = 0;
    printf("Enter any number: ");
    scanf("%d", &value);
    if (value == 0)
    {
        printf("Number of trailing zeros in %d is 32\n", value);
        return 0;
    }
    while (pos <= 31)
    {
        if (value & (1 << pos))
            break;
        pos++;
    }
    printf("Number of trailing zeros in %d is %d\n", value, pos);
    return 0;
}
