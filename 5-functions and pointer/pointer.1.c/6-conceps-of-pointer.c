    // important concept for understanding pointers



#include <stdio.h>

int main(){
int a = 25;
int* x = &a;
int** y = &x;  // double pointer
int*** z= &y;
// int* ---> int ka address store karta hai
// int** ---> int* ka address store krta hai
printf("%p\n", &x);  // x ka adress
printf("%p\n",y);  // x ka hi address❤️
printf("%d\n",a);  //25
printf("%d\n",*x); //25
printf("%d\n",**y); //25
printf("%d",***z); //25
   return 0;
}