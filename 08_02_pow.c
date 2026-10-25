#include <stdio.h> 

// Define a function that calculates the base raised to a non-negative integer exponent.
double power(double base , int exponent){
    // Initialize the result to 1, the multiplicative identity.
    double result = 1;

    // Multiply the result by the base exponent times.
    for(int i =0 ; i < exponent ; i++){
        result = result * base ; // Multiply the current result by the base (e.g., 2, then 2 * 2 = 4).
    }

    // Return the calculated power to the calling function.
    return result;
}

int main(){
    // Declare variables to store the base and exponent.
    double base ;
    int exponent ;

    // Prompt the user to enter the base and exponent.
    puts("please enter base and exponent: ");

    // Read the base as a double and the exponent as an integer.
    scanf("%lf %d",&base,&exponent);

    // Check whether the exponent is negative.
    if(exponent < 0){
        // Display a message because this implementation does not support negative exponents.
        printf("negative exponent are not support.\n");

    }else {
        // Call the power function and store its return value.
        double res = power(base,exponent);

        // Display the result with two digits after the decimal point.
        printf("result = %.2f",res);
    }

    // End of the main function.
}