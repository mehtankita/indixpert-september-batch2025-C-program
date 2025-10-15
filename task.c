#include <stdio.h>

int add(int a, int b)
{

    printf("Add: %d", a + b);
}

int sub(int a, int b)
{

    printf("Sub: %d", a - b);
}

int multiply(int a, int b)
{

    printf("Multiply: %d", a * b);
}

int division(int a, int b)
{
    float Division;
    Division = a / b;

    printf("Division: %f", Division);
}

int main()
{

    int first, second, option;

    printf("Enter First Number: ");
    scanf("%d", &first);

    printf("Enter Second Number: ");
    scanf("%d", &second);

    printf("\n1-Addition");
    printf("\n2-Subtraction");
    printf("\n3-Multiplication");
    printf("\n4-Division");

    printf("\nSelect Any Option: ");
    scanf("%d", &option);

    if (option == 1)
    {
        add(first, second);
    }

    else if (option == 2)
    {
        sub(first, second);
    }

    else if (option == 3)
    {
        multiply(first, second);
    }
    else if (option == 4)
    {
        division(first, second);
    }
    return 0;
}