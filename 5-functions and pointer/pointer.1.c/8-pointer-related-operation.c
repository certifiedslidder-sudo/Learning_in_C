#include<stdio.h>

int main(){
    int var  = 20;  //actual value declaration
    int *ip;     //pointer variable declaration
    ip = &var; //stores address of var in pointer variable

    printf("address of var : %p\n", &var);
  // ADDRESS STORED IN POINTER VARIABLE

    printf("address stored in ip variable: %p\n", ip);
  //ADDRESS STORED IN POINTER VARIABLE

    printf(" value of *ip variable : %d\n", *ip);
    //ACCESS THE VALUE STORED IN POINTER
    return 0;
}