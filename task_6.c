#include <stdio.h>
int main()
{
    signed int value = 0;
    unsigned int pos = 31;
    printf("Enter any number: ");
    scanf("%d", &value);
    while (pos >= 0)
    {
        if (value & (1 << pos))
        {
            printf("Highest order set bit in %d is %d\n", value, pos);
            break;
        }
        pos--;
    }
    return 0;
}
