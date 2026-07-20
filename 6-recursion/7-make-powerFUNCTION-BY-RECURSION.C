//make a function which calculates 'a' raised to the power 'b' using recursion.
#include<stdio.h>
int power(int a, int b){
    if (b==0) return 1;
    int recANS = a* power(a,b-1);    //imp relation
    return recANS;
}

int main(){
       int a ;
       printf("enter base: ");
       scanf("%d",&a);
       int b ;
       printf("enter power: ");
       scanf("%d",&b);
       int p = power(a,b);
       printf("%d  raised to the power %d is %d",a,b,p);      
      return 0;

}