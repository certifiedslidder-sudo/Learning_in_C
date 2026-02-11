#include<stdio.h>

int main(){
        int x,y,z;
    printf("enter value of x");
    scanf("%d", &x);
    printf("enter value of y");
    scanf("%d", &y);
    printf("enter value of z");
    scanf("%d", &z);
    if(x>y && x>z){
        printf(" %d is the greatest of three",x);
    }
    if(y>x && y>z){
        printf("%d is the greatest of three",y);
    }
    if(z>x && z>y){
        printf("%d is the greatest of three",z);
    }
    
    return 0;
}