#include <stdio.h>
int main()
{
    unsigned int val, shifts = 0;
    printf("Enter a number: ");
    scanf("%u", &val);
    printf("Enter number of rotation: ");
    scanf("%u", &shifts);
    shifts = shifts % 32;
    printf("%u left rotated %u times = %u\n", val, shifts, (val << shifts) | (val >> (32 - shifts)));
    printf("%u right rotated %u times = %u\n", val, shifts, (val >> shifts) | (val << (32 - shifts)));
    return 0;
}
