#include <stdio.h>
int main()
{
    signed int first, second = 0;
    printf("Enter any two numbers: ");
    scanf("%d %d", &first, &second);
    printf("Original value of num1 = %d\n", first);
    printf("Original value of num2 = %d\n", second);
    first = first ^ second;
    second = first ^ second;
    first = first ^ second;
    printf("Num1 after swapping = %d\n", first);
    printf("Num2 after swapping = %d\n", second);
    return 0;
}
