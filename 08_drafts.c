#include <stdio.h>
#include <math.h>
//double square(double x);
int sum(int,int);
void greet(){
    printf("hello. \n");
}
int f(int x){
    x = x + 10 ;
    return x;
}
int maximum(int x , int y){
    return (x > y) ? x : y ;
}
int main(){
    double num = 27 ;
    //printf("sqrt is : %.2f",sqrt(num));
    //printf("cbrt is : %.2f",cbrt(num));
   // printf("fmod : %.2f",fmod(7.5,2.0));
   // printf("sqrt is : %.2f",fmax(10,2));
  /*   printf("trunc : %.2f",trunc(9.2));
    int x = 10 ;
    assert(x>20); */
  /*   char c = 'a';
    printf("%c\n",toupper(c)); */
    //printf("%.2f\n",square(4));
 /*    greet();
    int x = sum(5,10);
    printf("%d",x);
 */
/*     double x = 3 ;
    double y = 2 ;
    double z = 4 ;
    double result = square(z + y * x);
    printf("%.2lf",result); */

    //printf("%.1lf",sqrt(81));
/*     int a = 5 ;
    printf("%d",f(a));
    printf("%d",a); */
    printf("%d",maximum(8,8));
    return 0;
}

double square(double x){
    double sqr = x * x ;
    return sqr ;
}

int sum(int a, int b){
    return a + b ;
 }