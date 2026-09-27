#include <stdio.h>

int main(){

    float a, b, result;
    char op;

    // Get two numbers and an operator from the user
    // Example input: 10 + 2
    printf("Please enter 2 numbers and an operator (e.g. 10 + 2): ");
    scanf("%f %c %f", &a, &op, &b);

    // Perform addition
    if(op == '+'){
        result = a + b;

    // Perform subtraction
    } else if(op == '-'){
        result = a - b;

    // Perform multiplication
    } else if(op == '*'){
        result = a * b;

    // Perform division
    } else if(op == '/'){

        // Check that the divisor is not zero
        if(b != 0){
            result = a / b;
        }
        else {
            printf("Division by zero");
            return 0;
        }

    // Handle an invalid operator
    } else {
        printf("Not a valid operator");
        return 0;
    }

    // Display the result with two decimal places
    printf("Your result is: %.2f\n", result);

    return 0;
}