#include<stdio.h>


int sum(int, int);       /// function prototype


       /*   FUNCTION DEFINITION*/
int sum(int x, int y){    
printf("the sum is %d\n",x+y );

return x+y;             // return value
}

int main(){
    int a = 1;
    int b = 2;


   sum(a,b);            /// function call

    int a1 = 12;
    int b1 = 23;
     
sum(a1,b1);
return 0;
}