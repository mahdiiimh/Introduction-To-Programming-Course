#include <stdio.h> 

int main(){
/*     int n ;
    long long a= 0 , b = 1, next ;
    puts("please enter n: ");
    scanf("%d",&n);

    // Check whether the input is valid and handle the first two Fibonacci numbers.
    if(n <= 0){
        printf("invalid input.\n");
    }else if( n == 1){
        printf("%lld",a);
    }else if( n == 2){
        printf("%lld",b);
    }else {
        // Calculate the nth Fibonacci number using iteration.
        for(int i=3;i <= n; i++ ){
            next = a + b; // Calculate the next Fibonacci number.
            a = b; // Update a to the previous value of b.
            b = next ; // Update b to the newly calculated Fibonacci number.
        }
        printf("%lld",b); // Display the nth Fibonacci number.
    } */

    // Declare variables to generate Fibonacci numbers.
    int n ;
    long long a = 0 , b = 1 , next ;

    // Prompt the user to enter the number of Fibonacci terms.
    puts("please enter n: ");

    // Read the number of terms from the user.
    scanf("%d",&n);

    // Generate and display the first n Fibonacci numbers.
    for(int i=1 ; i <=n ; i++){
        printf("%lld",a); // Display the current Fibonacci number.
        next = a + b ; // Calculate the next Fibonacci number.
        a = b ; // Move b to the current position.
        b = next ; // Store the newly calculated Fibonacci number.
    }

    // Return 0 to indicate successful program execution.
    return 0;
}