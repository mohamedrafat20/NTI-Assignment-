#include <stdio.h>
int main()
{
    signed int value = 0;
    unsigned int pos = 0;
    printf("Enter any number: ");
    scanf("%d", &value);
    printf("Enter nth bit to check (0-31): ");
    scanf("%d", &pos);
    while (pos > 31 || pos < 0)
    {
        printf("Invalid input. Please enter a number between 0 and 31: ");
        scanf("%d", &pos);
    }
    if (value & (1 << pos))
        printf("Bit %d of %d is set (1).\n", pos, value);
    else
        printf("Bit %d of %d is unset (0).\n", pos, value);
    return 0;
}
