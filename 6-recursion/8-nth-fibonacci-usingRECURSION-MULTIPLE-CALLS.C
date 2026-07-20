// WRITE A FUNCTION TO CALCULATE THE nth FIBONACCI NUMBER USING RECURSION.

/*                                                       ****MULTIPLE CALLS****            */
#include<stdio.h>
        int fibo(int n)
        {
        if( n==1 || n==2) return 1;    //or       if(n<=2) return 1    
        return fibo(n-1)+fibo(n-2);    // euler's diagram
        }
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    printf("%d", fibo(n));
    return 0;
}

