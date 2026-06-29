#include<stdio.h>

int main(){
    int i = 72;           // pointer declare
    int* j = &i;   // pointer initializing
       // j is pointer pointing at i or storing address of i
    int k = 48;
   printf("the address of i is %u\n", &i);          // *=value, &=address
    printf("the address of i is %p\n", j);
     printf("the address of i is %p\n", &k);
           //u = unsigned integer, p is format specifier for pointers
printf("the value of address is  %d\n" ,*(&i));    //*(&i) = value
    
    return 0;
}