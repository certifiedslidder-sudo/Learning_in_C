//  take float input and print the fractional part of the real number.
#include<stdio.h>

int main(){
     float x;
     printf("enter the number:");
    scanf("%f", &x);
    int y;
    y =x;
    printf("%d\n",y);
    float z= x-y;
    printf("Your fraction part of the number is:%f", z);    //gives in float
    return 0;
}