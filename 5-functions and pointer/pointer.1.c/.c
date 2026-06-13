#include<stdio.h>

int main(){
    int i = 72;
    int* j = &i;   // j is pointer pointing at i or storing address of i
    printf("the address of i is %p", &i);
     printf("the address of i is %p", j);

    
    return 0;
}