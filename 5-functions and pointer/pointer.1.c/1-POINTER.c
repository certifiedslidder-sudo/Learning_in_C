#include<stdio.h>
  // POINTER STORES ADDRESS OF VARIABLE.
int main(){
    int i = 72;

    int* j = &i;   // j is pointer pointing at i or storing address of i
    printf("%p\n",j);  // address of i 
    printf("%p\n",&j);  // address of j 
    printf("%d\n", *j); //IMPORTANT LINE 
    //GIVES VALUE STORED AT THAT ADDRESS.
    int b=  72;
    printf("%p\n", &i);    // %p prints address 
    printf("%p\n", &b);  //diff value as they get diff memory.
 
    printf("the address of i is %p\n", &i);
     printf("the address of i is %p", j);
 //these both means same j or &i both gives address of i
    
    return 0;
}