#include<stdio.h>

int main(){
    float principal,rate,time,SI;
    printf("enter principal:");
    scanf("%f", &principal);
    printf("enter rate:");
    scanf("%f", &rate);
    printf("enter time:");
    scanf("%f", &time);
    
    SI= (principal*rate*time)/100;
    printf("the simple interest is: %f",SI);
    return 0;
}