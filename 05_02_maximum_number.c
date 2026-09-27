#include <stdio.h>

int main(){

    int a, b, c;

    // Get three numbers from the user
    printf("Please enter 3 numbers");
    scanf("%d %d %d", &a, &b, &c);

    /*
    // Check if a is greater than both b and c
    if(a > b && a > c){

        printf("the largest number is : %d\n", a);

    // Check if b is greater than both a and c
    } else if(b > a && b > c){

        printf("the largest number is: %d\n", b);

    // If neither a nor b is the largest,
    // c is considered the largest
    } else {

        printf("the largest number is: %d\n", c);

    }
    */

    int max;

    // Find the largest number using nested conditional (ternary) operators
    // First, compare a and b
    // If a > b, compare a with c
    // Otherwise, compare b with c
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    // Display the largest number
    printf("The largest number is : %d\n", max);

    return 0;
}
