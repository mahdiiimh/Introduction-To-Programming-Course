#include <stdio.h> 

// Function prototype: declares a function that calculates the factorial of an integer.
long factoriel(int n);

int main(){
    // Declare a variable to store the user's input.
    int number ;

    // Prompt the user to enter a number.
    printf("please enter a number : ");

    // Read an integer from the user.
    scanf("%d",&number);

    // Check whether the input number is negative.
    if(number < 0){
        // The factorial is not defined for negative integers.
        printf("factoriel is not defined for negatives.");
    }else if(number > 20){
        // Prevent calculations that may exceed the capacity of the long type.
        printf("result is too large for long.");
    }else {
        // Calculate and display the factorial of the input number.
        printf("%d! = %ld",number,factoriel(number));
    }    

    // End of the main function.
}

// Function definition: calculates the factorial of n using iteration.
long factoriel(int n){
    // Initialize the factorial accumulator to 1.
    int fact = 1 ; // fact = 1, 1, 2

    // Multiply the accumulator by each integer from 1 through n.
    for (int i = 1; i<=n ; i++){ // i = 1, i = 2, i = 3
        fact *= i ; // fact = fact * i
                    // fact = 1 * 1 / 1 * 2 = 2 / 2 * 3 = 6
    }

    // Return the calculated factorial to the calling function.
    return fact ;
}