#include <stdio.h>

int main(){
    int x, y;
    char op;

    // Ask the user to enter the first operand, operator, and second operand
    printf("please enter operand1 operator operand2: ");

    // Read the first integer, operator character, and second integer
    scanf("%d %c %d", &x, &op, &y);

    // Select the appropriate operation based on the operator
    switch (op)
    {
    case '+':
        // Perform addition and print the result
        printf("%d + %d = %d \n", x, y, x + y);
        break;

    case '-':
        // Perform subtraction and print the result
        printf("%d - %d = %d \n", x, y, x - y);
        break;

    case '*':
        // Perform multiplication and print the result
        printf("%d * %d = %d \n", x, y, x * y);
        break;

    case '/':
        // Check whether the divisor is not zero
        if (y != 0){
            // Perform integer division and print the result
            printf("%d / %d = %d \n", x, y, x / y);
        }else {
            // Display an error message if the divisor is zero
            printf("division by zero.\n");
        }
        break;

    default:
        // Handle any operator that is not supported
        printf("not valid operator");
        break;
    }

    return 0;
}