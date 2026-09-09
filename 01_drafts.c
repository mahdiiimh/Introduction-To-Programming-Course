#include <stdio.h>
#include <stdbool.h>

// Comments

/*
muliple 
line
 comments
*/
//++++++++++++++++++++++++++++++++++++++++

int main(){
    // how to use printf(basic)
    printf("Hello World this is me!\n");
    printf("C is nice!\n");
    printf("Ali\" said\n");
    printf("ali\\ 2\n");
    printf("a\tb"); 
    // variables --> int
    int var = 22;
    printf("%d",var);
    int sizeVar = sizeof(var);
    printf("%d",sizeVar);
    // variables --> float,double
 
    float var = 3.1415;
    double var_2 = 14.38;
    printf("%f",var);
    printf("%lf",var_2); 
    // DataTypes size
    int size_int = sizeof(int);
    int size_long_int = sizeof(long int);
    int size_short_int = sizeof(short int);
    int size_llong_int = sizeof(long long int);
    int size_double = sizeof(double);
    int size_long_double = sizeof(long double);
    printf("int size: %d\n",size_int);
    printf("long size: %d\n",size_long_int);
    printf("short size: %d\n",size_short_int);
    printf("long long size: %d\n",size_llong_int);
    printf("double size: %d\n",size_double);
    printf("long double size: %d\n",size_long_double); 
    //constants
    const float PI = 3.1415;
    // PI = 4;  lvalue must be modifiable so there is an error
     
    
     // booleans 
     // 1: use stdbool.h header file
     // 2: use enumeration type (see later)
     // 3: using define to declare boolean values (see later)

    bool a = true;
    bool b = false;
    printf("True : %d\n",a);
    printf("Flase: %d\n", b);

    return 0;
}