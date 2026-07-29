#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "sneha rawat";
//    ptr[0]= ' W';            // error
    char* ptr = str;
  //  ptr = "aarav rawat";
  ptr = " suhana";
    printf("%s", str);             
    printf("%s", ptr);             
    return 0;
    //pointer change the address to which they point after initializing a new character array.
}