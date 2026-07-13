#include<stdio.h>
   // n! = n*(n-1)!    // reccurence relation


   int factorial(int n){
    if(n==1 || n == 0)        // BASE CASE
    return 1;
    return n*factorial(n-1);
   }

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("%d", fact);
    return 0;
}