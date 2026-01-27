/*
Write a program to determine whether a character entered by
 the user is lowercase or not.
*/
 #include<stdio.h>
 
 int main(){
    char ch = '"';
    printf("the character is %c\n", ch);
    printf("the value of character is %d\n", ch);
    /*
    97,122
    */
   if(ch>=97 && ch<=122){
      printf("this character is lower case\n");
   
   }
   else{
   printf("this character is not lower case\n");
   }
    return 0;
 }