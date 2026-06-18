/*WAP TO PRINT THE nTH FIBONACCI NUMBER.*/
//HINT, loops , use 3 variables
#include<stdio.h>

int main(){
    int n;
    printf("enter a numer:");
    scanf("%d", &n);
    int a=1;
    int b =1;
    int sum=1;
    for(int i=1; i<= n-2;i++) //IMP LINE
    // kyuki loop 3rd term se chalaya h 1 and 2nd term 1 1 hai toh jo fibonaci ari h wo n+2 ki ari h , n 6 dalne pr 8th term ki fibonacci ari h.❤️❤️
    {
        sum = a+b;
        a = b;
        b= sum;
    }
    printf(" the fibonacci of %d is %d",n,sum);
    return 0;
}