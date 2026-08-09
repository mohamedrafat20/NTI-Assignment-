#include <stdio.h>
int main()
{
    unsigned int value = 0;
    printf("Enter any number: ");
    scanf("%d", &value);
    if (value & 1)
        printf("%d is odd.\n", value);
    else
        printf("%d is even.\n", value);
    return 0;
}
