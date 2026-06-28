#include<stdio.h>

int main(){
    int x = 100;
    int* y = &x;
    *y = 7;
    printf("\n%d",x );
    return 0;
}