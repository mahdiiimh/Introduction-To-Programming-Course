#include <stdio.h> 

int main(){
    // Declare variables for the input number, its original value,
    // the reversed number, and the current digit.
    int n, original, reverse = 0, digit;

    // Read an integer from the user.
    scanf("%d",&n);

    // Store the original number for comparison after reversing it.
    original = n ;

    // Reverse the number by extracting its digits one at a time.
    while (n > 0)
    {
        digit = n % 10 ; // Extract the last digit of n.
        reverse = reverse * 10 + digit ; // Append the extracted digit to the reversed number.
        n /= 10 ; // Remove the last digit from n using integer division.
    }

    // Compare the reversed number with the original number.
    if(original == reverse){
        // The number is a palindrome if both values are equal.
        printf("Palindrome.");
    }else {
        // The number is not a palindrome if the values are different.
        printf("Not Palindrome.");
    }

    // Return 0 to indicate successful program execution.
    return 0;
}