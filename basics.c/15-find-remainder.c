/*take two integers input, a and b : a>b, and find the remainder when a is divided by b & print the remainder.*/

#include<stdio.h>

int main(){
    int a,q,b,r;
    printf("enter first number");
    scanf("%d", &a);
    printf("enter second number");
    scanf("%d",&b);
     q=a/b;
     r = a-b*q;  //divisor*quotient+remainder=divident
     printf("the remainder when %d is divided by  %d is: %d",a,b,r);


    return 0;
}