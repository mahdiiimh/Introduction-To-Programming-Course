#include <stdio.h>

int main(){

    int x = 5 ;
    int y = 2 ;
    int z = x / y ; // z = 2.5
    printf("%d\n",z);
 

    char c = 'm';
    double a = c + 12 + 4.5 ; // char ---> int ----> double
    // char + int ---> int / int + double ---> double
    printf("%.2f\n",a);
     

    int a = 9.1 ;
    printf("%d\n",a);
    float b = 8 ;
    printf("%f\n",b);
      
    float x = (float) 5/2; // explicit casting to float
    printf("%f\n",x);
      
    char x = 'm';
    int z =  x ;
    printf("%d",z); 
    int x = 1000 ;
    char z = x ; // char z = (char) x ; 
    printf("%d",z);
}