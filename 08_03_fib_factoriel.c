#include <stdio.h> 

// Function prototypes: declare the functions before they are called.
int fibonacci(int n);
long factoriel(int n);

int main(){
    // Declare a variable to store the user's input.
    int number ;

    // Prompt the user to enter a number.
    printf("please enter a number : ");

    // Read an integer from the user.
    scanf("%d",&number);

    // Call fibonacci() to calculate the nth Fibonacci number.
    // Call factoriel() to calculate the factorial of that Fibonacci number.
    // Print the final result.
    //int fib = fibonacci(number);
    //long factfib = factoriel(fib);
    //printf("%d \n",fib);
    //printf("%ld \n",factfib);

    // An alternative way to calculate the factorial of the nth Fibonacci number.
    //long result = factoriel(fibonacci(number));

    // Call fibonacci() first, pass its return value to factoriel(),
    // and print the factorial returned by factoriel().
    printf("%ld \n", factoriel(fibonacci(number)));

}

// Function definition: calculates the nth Fibonacci number iteratively.
int fibonacci(int n){
    // Initialize the first two Fibonacci values and a temporary variable.
    int a = 0 , b = 1, tmp ;

    // Generate the Fibonacci sequence by updating a and b in each iteration.
    for(int i =0; i < n;i++){
        tmp = a + b ; // Calculate the next Fibonacci number.
        a = b; // Update a to the previous value of b.
        b = tmp ; // Update b to the newly calculated Fibonacci number.
    }

    // Return the nth Fibonacci number.
    return a;
}

// Function definition: calculates the factorial of n iteratively.
long factoriel(int n){
    // Initialize the factorial accumulator to 1.
    int fact = 1 ; 

    // Multiply the accumulator by each integer from 1 through n.
    for (int i = 1; i<=n ; i++){ 
        fact *= i ; // Multiply the current factorial by i.
    }

    // Return the calculated factorial.
    return fact ;
}