#include<stdio.h>

int main(){
    int x= 5;
    printf("%d\n",x);
    //++x;    //x=x+1
    //printf("%d\n", x++);  //will print 5
/* x++ means use x, then increment whereas ++x means increment x, then use.*/


    printf("%d\n", ++x); //will print 6

    return 0;
}