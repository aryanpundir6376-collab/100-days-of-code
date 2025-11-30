// Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main()
{
    long long num;
    int digit, freq[10] = {0}, max = 0, maxDigit = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    if (num < 0)
        num = -num;

    while (num > 0)
    {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
            maxDigit = i;
        }
    }

    printf("Digit occurring most times: %d", maxDigit);

    return 0;
}
