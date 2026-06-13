//AP = 4,7,10,13,16 upto n terms without mathematics

#include<stdio.h>

int main(){
    int n; // no. of times loop runs
    printf("enter a number:");
    scanf("%d", &n);
    //WE ARE GOING TO USE EXTRA VARIABLE
    int a =4;
    for( int i=1 ; i<=n; i++){
        printf("%d\n",a);
        a=a+3; // a+ common difference

    }
    
    return 0;
}
