#include<stdio.h>
#include<string.h>


int main(){
    //char str[] = " college wallah";
    // char* ptr = str;  // ptr = now points to str[0] ; another way of initializing a string
    //                 // after this ptr stands for addrerss
    //                  //  *ptr = can fetch the value or character
   
    //                  int i = 0;
    //                  while(*ptr!='\0'){
    //                     printf("%c",*ptr);
    //                     ptr++;
    //                     i++;

                     
    // printf("%p", &str[0]);
    // printf("%p", str);    //& not needed
char*ptr = "college wallah";
    ptr[5] = 'D';
    printf("%s",ptr);  
    
    return 0;
}