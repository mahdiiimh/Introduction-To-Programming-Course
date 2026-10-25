/* /* #include <stdio.h>
int a, b ;
void add(){
    printf("%d \n ",a+b);
}
/* void D(){
    float d = 49.4f;
    printf("in function D\n");
}
void C(){
    double c = 30.5 ;
    printf("in function C\n");
}
void B(){
    int b = 20 ;
    C();
    printf("in function B\n");
}
void A(){
    int a = 10 ;
    B();
    printf("in function A\n");
} */

/* void updateValue(int *y){
    *y = *y + 10 ;
}
 */
/* void counter(){
    static int count = 0 ;
    count++;
    printf("Count = %d \n",count);
} */
//extern int a ;
//void myfunc();
//int main(){
//extern int x ;
/*     A();
    D(); */
/*     int x = 50 ;
    printf("Before function call x = %d\n",x);
    updateValue(&x);
    printf("After function call x = %d\n",x);
 */
/* 
    auto int x = 10 ;
    printf("%d",x); */
/*     counter();
    counter(); */
/*     x++;
    printf("x : %d ", x); */
/*     add();
    a = 20 ; 
    b = 10 ;
    printf("%d %d \n ", a , b);
    add(); 
    a = 100 ;
    myfunc();
    return 0 ;
}
 */
//************ */

#include <stdio.h>
int x = 10;
int main()
{
void AB();
/*     {
        int x = 10, y =20 ;
        {
            printf("x= %d, y = %d\n",x,y);
            {
                int y = 40;
                x++;
                y++;
                printf("x= %d, y = %d\n",x,y);
            }
            printf("x= %d, y = %d\n",x,y);
        }
    } */
    int x = 20 ;
    {
        int x = 30 ;
        printf("%d ", x);

    }
    printf("%d\n", x);
    AB();
    return 0 ;
}

void AB(){
    puts("HELL");
}