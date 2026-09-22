#include <stdio.h>

int main(){

    // ============================================================
    // 1. Arithmetic Operators
    // ============================================================

    int a = 28, b = 5;

    int z = a + b;
    printf("a + b = %d\n", z);

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    printf("+a = %d\n", +a);
    printf("-a = %d\n", -a);

    float a2 = 25, b2 = 2;
    printf("a2 %% 2 = %d\n", (int)a2 % 2);


    // ============================================================
    // 2. Relational Operators
    // ============================================================

    a = 25;
    b = 5;

    printf("a < b  : %d\n", a < b);
    printf("a > b  : %d\n", a > b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);

    puts("-------------");

    printf("25 <= 25 : %d\n", 25 <= 25);


    // ============================================================
    // 3. Logical Operators
    // ============================================================

    int c = 4, d = 10;

    printf("a > b && c < d : %d\n", a > b && c < d);
    printf("a < b && c < d : %d\n", a < b && c < d);
    printf("a < b || c < d : %d\n", a < b || c < d);
    printf("!(a > b)       : %d\n", !(a > b));


    // ============================================================
    // 4. Bitwise Operators
    // ============================================================

    int x = 25, y = 5;

    printf("x & y : %d\n", x & y);
    printf("x | y : %d\n", x | y);
    printf("x ^ y : %d\n", x ^ y);
    printf("~x    : %d\n", ~x);

    char bit = 1;
    printf("~bit  : %d\n", ~bit);

    int n1 = 25;
    int n2 = n1 << 2;
    int n3 = n1 >> 2;

    printf("n1 << 2 : %d\n", n2);
    printf("n1 >> 2 : %d\n", n3);


    // ============================================================
    // 5. Assignment Operators
    // ============================================================

    int value = 5;
    int number = 25;

    printf("value = %d\n", value);

    value += number;

    printf("value += number : %d\n", value);


    // ============================================================
    // 6. Increment and Decrement Operators
    // ============================================================

    int counter = 5;

    int first = counter++;
    int second = counter++;
    int third = ++counter;

    printf("counter = %d\n", counter);
    printf("first = %d, second = %d, third = %d\n",
           first, second, third);


    // ============================================================
    // 7. Conditional (Ternary) Operator
    // ============================================================

    int num1 = 30, num2 = 20;

    int max = (num1 > num2) ? num1 : num2;

    printf("Maximum is: %d\n", max);


    // ============================================================
    // 8. Operator Precedence
    // ============================================================

    printf("4 * 5 / 2 + 5 %% 2 = %d\n", 4 * 5 / 2 + 5 % 2);

    printf("4 * (5 / 2) + 5 %% 2 = %d\n",
           4 * (5 / 2) + 5 % 2);


    // ============================================================
    // 9. Post-increment in an Expression
    // ============================================================

    int post = 20;

    printf("10 * post++ = %d\n", 10 * post);
    post++;

    // 10 * (post++) is different from (10 * post)++


    // ============================================================
    // 10. Logical Expression
    // ============================================================

    int logicX = 10, logicY = 20;

    int result = logicX < logicY && logicY != 15;

    printf("Logical result = %d\n", result);


    // ============================================================
    // 11. Integer Division and Type Casting
    // ============================================================

    int divX = 7, divY = 2;

    printf("Integer division : %d\n", divX / divY);
    printf("Floating-point division : %.2f\n", (float)divX / divY);


    // ============================================================
    // 12. Post-increment
    // ============================================================

    int incX = 5;
    int incY = incX++;

    printf("incX = %d\n", incX);
    printf("incY = %d\n", incY);


    // ============================================================
    // 13. Type Casting with Division
    // ============================================================

    int castA = 11, castB = 4;

    printf("11 / 4 = %.2f\n", (double)castA / castB);


    // ============================================================
    // 14. Multiple Type Casts
    // ============================================================

    int castC = 3;
    double castD = 2.5;

    printf("%d\n", (int)(castC / castD) + (int)(castD / castC));


    // ============================================================
    // 15. Comparison and Arithmetic Operators
    // ============================================================

    int compareX = 10;

    printf("compareX + 5 > 10 : %d\n", compareX + 5 > 10);


    // ============================================================
    // 16. Post-increment in a Larger Expression
    // ============================================================

    int expressionX = 3;

    printf("expressionX++ * 2 + 1 = %d\n",
           expressionX++ * 2 + 1);


    // ============================================================
    // 17. Implicit Conversion and Overflow
    // ============================================================

    unsigned char unsignedChar = 290;

    printf("unsignedChar = %d\n", unsignedChar);


    // ============================================================
    // 18. Invalid Operation: Modulus with Floating-point Numbers
    // ============================================================

    /*
        The % operator can only be used with integer operands.

        float floatingX = 21.0;
        floatingX %= 3.0;
    */


    // ============================================================
    // 19. Assignment Inside an Expression
    // ============================================================

    int assignmentI = 5;

    printf("%d\n", assignmentI = ++assignmentI == 6);


    // ============================================================
    // 20. Chained Comparisons with Logical AND
    // ============================================================

    int chainA = 5, chainB = 3, chainC = 2;

    printf("%d\n", chainA > chainB && chainB > chainC);


    // ============================================================
    // 21. Pre-increment, Post-increment and Pre-decrement
    // ============================================================

    int i = 3, j = 4;

    printf("i++ + --j = %d\n", i++ + --j);


    // ============================================================
    // 22. Operator Precedence: i++ + j
    // ============================================================

    i = 1;
    j = 2;

    printf("i+++j = %d\n", i++ + j);


    return 0;
}
