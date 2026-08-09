#include <stdio.h>
int main()
{
    signed int value = 0;
    signed int output = 0;
    printf("Enter any number: ");
    scanf("%d", &value);
    output = ~value;
    printf("Original number = %d (in decimal)\n", value);
    printf("Number after bits are flipped = %d (in decimal)\n", output);
    return 0;
}
