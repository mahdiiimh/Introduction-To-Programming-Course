#include <stdio.h>

// Recursive function that prints each recursion level until n reaches 6.
void rec(int n){
    // Base case: stop the recursion when n equals 6.
    if(n==6)
        return;

    // Print the current recursion level.
    printf("Recursion level %d\n",n);

    // Recursive call: increase n by 1.
    rec(n+1);
}

// Recursive function that demonstrates the creation and removal of stack frames.
void f(int n){
    // Print a message when the current function's stack frame is pushed onto the stack.
    printf("F(%d)'s Stack frame pushed. \n",n);

    // If n is greater than 1, make two recursive calls.
    if(n>1){
        f(n-1);
        f(n-1);
    }

    // Print a message when the current function's stack frame is about to be removed.
    printf("F(%d)'s Stack frame removed. \n",n);
}

//*******************

// Function prototypes for calculating the factorial and Fibonacci sequence.
unsigned long long int factorial(int number);
unsigned long long int fibonacci(int number);

int main()
{
    // Call rec(3) to demonstrate recursion levels.
    //rec(3);

    // Call f(3) to demonstrate how recursive calls create and remove stack frames.
    //f(3);

    // Calculate and print the factorial of 5.
    //printf("fact = %llu ",factorial(5));

    /* Calculate and print the factorial of each integer from 0 to 21.
    for(int i=0; i <= 21; i++){
        printf("%d! = %llu\n",i,factorial(i));
    } */

    // Calculate and print the first 11 Fibonacci numbers, from index 0 to index 10.
    for (int i = 0 ; i <=10 ; i++){
        printf("Fibonacci(%d) = %llu \n",i,fibonacci(i));

    }

    // Calculate and print the Fibonacci number at index 3.
    printf("Fibonacci(3) = %llu \n",fibonacci(3));

    // Calculate and print the Fibonacci number at index 20.
    printf("Fibonacci(20) = %llu \n",fibonacci(20));

    // Calculate and print the Fibonacci number at index 30.
    printf("Fibonacci(30) = %llu \n",fibonacci(30));

    // Calculate and print the Fibonacci number at index 40.
    printf("Fibonacci(40) = %llu \n",fibonacci(40));

}

// Recursive function that calculates the factorial of a non-negative integer.
unsigned long long int factorial(int number){

    /* Iterative implementation of factorial using a loop.
    unsigned long long int fact = 1 ;
    for(int i = number ; i >= 1 ;i--){
        fact *= i ;
    }
    return fact; */

    // Base case: the factorial of 0 or 1 is 1.
    if(number <=1){
        return 1 ; // base case
    }else {
        // Recursive case: multiply number by the factorial of number - 1.
        return(number * factorial(number - 1));
    }
}

// Recursive function that calculates the Fibonacci number at a given index.
unsigned long long int fibonacci(int number){

    // Base cases: Fibonacci(0) = 0 and Fibonacci(1) = 1.
    if(0 == number || 1 == number){
        return number ;
    }else {
        // Recursive case: add the two preceding Fibonacci numbers.
        return fibonacci(number - 1) + fibonacci(number - 2);
    }
}