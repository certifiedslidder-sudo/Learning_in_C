#include<stdio.h>
#include<string.h>   // IMPORTANT FOR PRINTF("%s")
           //        %s --> prints  whole string ,format specifier for string
int main(){
  char str[] = " i am the best";
  printf("%s\n", str);
  puts("heyyyy guys");                           //dont need #include<string.h>
    return 0;
}