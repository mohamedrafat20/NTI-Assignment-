#include <stdio.h>
int main()
{
    signed int value;
    signed int idx = 31;
    printf("Enter any number: ");
    scanf("%d", &value);
    printf("Converted binary: ");
    while (idx >= 0)
    {
        if (value & (1 << idx))
            printf("1");
        else
            printf("0");
        idx--;
    }
    printf("\n");
    return 0;
}
