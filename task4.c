#include <stdio.h>
int main()
{
    signed int value = 0;
    unsigned int pos = 0;
    printf("Enter any number: ");
    scanf("%d", &value);
    printf("Enter nth bit to set (0-31): ");
    scanf("%u", &pos);
    while (pos > 31)
    {
        printf("Invalid input. Please enter a number between 0 and 31: ");
        scanf("%u", &pos);
    }
    value = value | (1 << pos);
    printf("Number after setting bit %u: %d\n", pos, value);
    return 0;
}
