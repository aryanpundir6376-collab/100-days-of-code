// A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>

int main()
{
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening numbers.txt\n");
        return 1;
    }

    int num, sum = 0, count = 0;
    while (fscanf(fp, "%d", &num) == 1)
    {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0)
    {
        printf("No numbers found in the file.\n");
    }
    else
    {
        double average = (double)sum / count;
        printf("Sum: %d\n", sum);
        printf("Average: %.2lf\n", average);
    }

    return 0;
}
