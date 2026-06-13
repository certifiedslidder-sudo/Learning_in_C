#include<stdio.h>

int main(){
    int x = 10;
    float y = 1.3f;     
    char z = 'p';

    int* a = &x;
    float* b = &y;   //declare and initialize
    char* c = &z;


printf("value of x = %d\n", *a);
printf("value of y = %f\n", *b);
printf("value of z = %c\n", *c);


    return 0;
}