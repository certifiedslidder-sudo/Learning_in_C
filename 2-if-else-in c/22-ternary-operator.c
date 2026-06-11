/*
expression 1: expression 2: expression 3

*/
#include<stdio.h>

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    //TERNARY OPERATOR
    // EXP1 ? EXP2 : EXP3
    n%2==0 ? printf("even number") : printf("odd number");
//     if(n%2==0)
//     {
//         printf("even number");
//     }
//     else
//     {
//         printf("odd number");
//     }

     return 0;
 }