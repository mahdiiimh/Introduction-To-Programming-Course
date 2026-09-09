#include <stdio.h>
#include <stdbool.h>

// variables and dataTypes
// you may ask why we use (int)sizeof()? you will get the answer in next video
int main()
{
    // int
    // Lower: -2,147,483,648
    // Upper:  2,147,483,647
    int a = 10;
    printf("int: value = %d, size = %d bytes\n", a, (int)sizeof(a));


    // unsigned int
    // Lower: 0
    // Upper: 4,294,967,295
    unsigned int b = 10;
    printf("unsigned int: value = %u, size = %d bytes\n", b, (int)sizeof(b));


    // signed int
    // Lower: -2,147,483,648
    // Upper:  2,147,483,647
    signed int c = -10;
    printf("signed int: value = %d, size = %d bytes\n", c, (int)sizeof(c));


    // short int
    // Lower: -32,768
    // Upper:  32,767
    short int d = 10;
    printf("short int: value = %d, size = %d bytes\n", d, (int)sizeof(d));


    // unsigned short int
    // Lower: 0
    // Upper: 65,535
    unsigned short int e = 10;
    printf("unsigned short int: value = %u, size = %d bytes\n", e, (int)sizeof(e));


    // signed short int
    // Lower: -32,768
    // Upper: 32,767
    signed short int f = -10;
    printf("signed short int: value = %d, size = %d bytes\n", f, (int)sizeof(f));


    // long int
    // Lower and Upper depend on the system
    long int g = 10;
    printf("long int: value = %ld, size = %d bytes\n", g, (int)sizeof(g));


    // unsigned long int
    // Lower: 0
    // Upper depends on the system
    unsigned long int h = 10;
    printf("unsigned long int: value = %lu, size = %d bytes\n", h, (int)sizeof(h));


    // signed long int
    // Lower and Upper depend on the system
    signed long int i = -10;
    printf("signed long int: value = %ld, size = %d bytes\n", i, (int)sizeof(i));


    // long long int
    // Lower: -9,223,372,036,854,775,808
    // Upper:  9,223,372,036,854,775,807
    long long int j = 10;
    printf("long long int: value = %lld, size = %d bytes\n", j, (int)sizeof(j));


    // unsigned long long int
    // Lower: 0
    // Upper: 18,446,744,073,709,551,615
    unsigned long long int k = 10;
    printf("unsigned long long int: value = %llu, size = %d bytes\n", k, (int)sizeof(k));


    // signed long long int
    // Lower: -9,223,372,036,854,775,808
    // Upper:  9,223,372,036,854,775,807
    signed long long int l = -10;
    printf("signed long long int: value = %lld, size = %d bytes\n", l, (int)sizeof(l));


    // float
    // Lower: approximately -3.4 × 10^38
    // Upper: approximately  3.4 × 10^38
    float m = 10.5;
    printf("float: value = %f, size = %d bytes\n", m, (int)sizeof(m));


    // double
    // Lower: approximately -1.7 × 10^308
    // Upper: approximately  1.7 × 10^308
    double n = 10.5;
    printf("double: value = %f, size = %d bytes\n", n, (int)sizeof(n));


    // long double
    // Lower and Upper depend on the system
    long double o = 10.5;
    printf("long double: value = %Lf, size = %d bytes\n", o, (int)sizeof(o));


    // char
    // Lower and Upper depend on whether char is signed or unsigned
    char p = 'A';
    printf("char: value = %c, size = %d byte\n", p, (int)sizeof(p));


    // signed char
    // Lower: -128
    // Upper: 127
    signed char q = -10;
    printf("signed char: value = %d, size = %d byte\n", q, (int)sizeof(q));


    // unsigned char
    // Lower: 0
    // Upper: 255
    unsigned char r = 10;
    printf("unsigned char: value = %u, size = %d byte\n", r, (int)sizeof(r));
    
    
    // Boolean variables --- with stdbool.h
    bool isStudent = true;
    bool isTeacher = false;

    printf("isStudent: %d\n", isStudent);
    printf("isTeacher: %d\n", isTeacher);


    // Constant 
    const int age = 29;

    printf("age: %d\n", age);


    return 0;
}