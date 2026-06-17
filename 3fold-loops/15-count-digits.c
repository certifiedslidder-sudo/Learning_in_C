/*WAP TO COUNT DIGITS OF A GIVEN NUMBER.*/


//condition used: n!=0 and n>0
//    /10 removes last digit

#include<stdio.h>

int main(){
    int n;
    printf("enter a no:");
    scanf("%d" , &n);
    int count =0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("the no. of digits are %d", count);
    return 0;
}