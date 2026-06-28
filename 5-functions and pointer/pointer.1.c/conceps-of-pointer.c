#include <stdio.h>

int main(){
int a = 25;
int* x = &a;
int** y = &x;  // double pointer
// int* ---> int ka address store karta hai
// int** ---> int* ka address store krta hai
printf("%p\n",&x);
printf("%p\n",y);
   return 0;
}