#include<stdio.h>

//function prototype or function declaration
int sum(int,int);     

//function definition
int sum(int x ,int y){
  // printf("the sum is %d\n", x+y);
    return x + y;
}
/*
*  Function is a way to break our code into chunks so that it is possible for a
   programmer to reuse them.
   it is possible for a programmer to reuse them.
*  A function is a block of code which performs a particular task.
*  A function can be reused by the programmer in a given program any number of times.
*  A function prototype informs the compiler about a function that will be defined
   later in the program.
 * A function call instructs the compiler to execute the function's body when the call is
   made.
*  Note that program execution starts from the main function and follows the sequence
   of instructions written.
*  increases codes reusability.
*/

int main(){
  int  a = 1;
  int b=2;
 // int c = a+b ;
 //printf("the sum is %d\n",c);
  int c = sum(a,b);                       ///  function calling
   printf("%d\n",c);


  int  a1 = 12 ;
   int b1=23;
 // int c1 = a1 +b1 ;
 // printf("the sum is %d\n",c1);
 int c1 = sum(a1,b1);                                   // function call
 printf("%d\n",c1);



    return 0;
}