#include<stdio.h>

int main(){
    int x = 100;
    printf("%d",x);
    int* y = &x;
    printf("\n%d", &x);
    printf("\n%d", y);
    
    return 0;
}