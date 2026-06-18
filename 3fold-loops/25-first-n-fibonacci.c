/*WAP TO PRINT THE first  n FIBONACCI NUMBERS.*/

#include<stdio.h>

int main(){
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    int a = 1;
    int b = 1;
    int sum;
    printf("%d %d " ,a,b);
    for(int i=1; i<= n-2;i++)
    {
        sum = a+b;
        printf("%d ", sum);
        a = b;
        b= sum;
      
    }

    return 0;
}