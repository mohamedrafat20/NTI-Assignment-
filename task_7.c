#include <stdio.h>
int main()
{
    signed int value = 0;
    unsigned int pos = 0;
    printf("Enter any number: ");
    scanf("%d", &value);
    while (pos <= 31)
    {
        if (value & (1 << pos))
        {
            printf("Lowest order set bit in %d is %d\n", value, pos);
            break;
        }
        pos++;
    }
    return 0;
}
