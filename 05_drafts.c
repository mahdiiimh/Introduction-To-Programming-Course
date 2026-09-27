#include <stdio.h>

int main(){

    // Example 1: Simple if statements

    int n1 = 9;

    puts("codes before if");

    if(n1 > 10){
        printf("number is less than 10: %d\n", n1);
    }

    puts("codes after first if");

    if(n1 > 20){
        printf("Number is larger than 20: %d\n", n1);
    }

    puts("codes after second if");


    // Example 2: Check odd or even using two separate if statements

    int number1 = 21;

    if(number1 % 2 == 0){
        printf("%d is even number.\n", number1);
    }

    if(number1 % 2 != 0){
        printf("%d is odd number.\n", number1);
    }


    // Example 3: Check odd or even using if-else

    int number2 = 21;

    if(number2 % 2 == 0){
        printf("%d is even number.\n", number2);
    } else {
        printf("%d is odd number.\n", number2);
    }


    // Example 4: Check divisibility by 3 and 5

    int number3 = 25;

    if(number3 % 3 == 0 && number3 % 5 == 0){
        printf("%d is divisible by 3 and 5\n", number3);
    } else {
        printf("%d is not divisible by 3 and 5\n", number3);
    }


    // Example 5: Grading score using if-else-if

    int score;

    printf("Please enter your score: ");
    scanf("%d", &score);

    if(score >= 18){
        printf("Excellent\n");
    } else if(score >= 15){
        printf("Good\n");
    } else if(score >= 12){
        printf("Not Bad\n");
    } else {
        printf("You need more work\n");
    }


    // Example 6: Find the largest number between two numbers

    int m1 = 5, n2 = 4;

    if(m1 > n2){
        printf("m is larger than n and it is %d\n", m1);
    } else {
        printf("n is larger than m and it is %d\n", n2);
    }


    // Example 7: Conditional operator (ternary operator)

    int m2 = 5, n3 = 10;

    (m2 > n3)
        ? printf("m is larger than n and it is %d\n", m2)
        : printf("n is larger than m and it is %d\n", n3);


    // Example 8: Nested if and dangling else

    int x1 = 10;

    if(x1 > 5)
        if(x1 > 20)
            printf("A\n");
        else
            printf("B\n");
    else
        printf("C\n");


    // Example 9: Nested conditional operator

    int a = 5, b = 10, c = 7;

    printf("%d\n", a > b ? a : b > c ? b : c);

    // Example 10: Multiple statements without braces

    /*
    int x = 3;

    if(x > 2)
        printf("A");
        printf("B");
    else //compile time error
        printf("C");
    */


    // Example 11: Short-circuit evaluation with logical AND

    int x3 = 10, y = 20, z = 30;

    if((x3++ > 10) && (y++ == 20) && (z++ == 30)){
        printf("%d %d %d\n", x3, y, z);
    } else {
        printf("%d %d %d\n", x3, y, z);
    }


    // Example 12: Nested if statements

    /*
    if(exp1){
        if(exp2){
        }
    } else {
        if(exp3){
        }
    }
    */


    return 0;
}