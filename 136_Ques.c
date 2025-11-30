// Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>

enum Menu
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    int choice;
    double num1, num2, result;

    printf("Menu:\n1. ADD\n2. SUBTRACT\n3. MULTIPLY\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice < ADD || choice > MULTIPLY)
    {
        printf("Invalid choice.\n");
        return 1;
    }

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (choice)
    {
    case ADD:
        result = num1 + num2;
        printf("Result: %.2lf\n", result);
        break;
    case SUBTRACT:
        result = num1 - num2;
        printf("Result: %.2lf\n", result);
        break;
    case MULTIPLY:
        result = num1 * num2;
        printf("Result: %.2lf\n", result);
        break;
    }

    return 0;
}
