#include <stdio.h>
int main()
{
    signed int value = 0;
    unsigned int pos = 31;
    unsigned int cnt = 0;
    printf("Enter any number: ");
    scanf("%d", &value);
    while (pos >= 0)
    {
        if (value & (1 << pos))
            break;
        cnt++;
        pos--;
    }
    printf("Total number of leading zeros in %d is %d\n", value, cnt);
    return 0;
}
