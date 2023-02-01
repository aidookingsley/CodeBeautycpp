#include <stdio.h>
/* Display
A for ADDITION
S for SUBTRACTION
M for MULTIPLICATION
D for DIVISION
*/

int main()
{
    char choice = 'S';
    int Num1 = 500, Num2 = 4, Num3 = 5;
    float Results;

    // For Addition

    if (choice == 'A')
    {
        Results = Num1 + Num2 + Num3;
    }

    // For Subtraction
    else if (choice == 'S')
    {
        Results = Num1 - Num2 - Num3;
    }

    // For Multiplication
    else if (choice == 'M')
    {
        Results = Num1 * Num2 * Num3;
    }
    // For Division
    else if (choice == 'D')
    {
        Results = Num1 * Num2 * Num3;
    }
    else
    {
        printf("No valid Choice selected. Please check !\n");
    }
    printf("The results of Choice selected is: %f", Results);

    return 0;
}