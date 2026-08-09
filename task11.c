#include <stdio.h>
int main()
{
    signed int value = 0;
    unsigned int idx = 0;
    unsigned int setBits = 0;
    unsigned int clearBits = 0;
    printf("Enter any number: ");
    scanf("%d", &value);
    while (idx <= 31)
    {
        if (value & (1 << idx))
            setBits++;
        else
            clearBits++;
        idx++;
    }
    printf("Total zero bits is %d\n", clearBits);
    printf("Total one bits is %d\n", setBits);
    return 0;
}
