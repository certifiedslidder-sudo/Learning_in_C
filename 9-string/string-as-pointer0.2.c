#include<stdio.h>
#include<string.h>

int main(){
    char str[]= "college wallah";
    // ptr = "physics wallah";   // will run
    // ptr[0] = 'u';               // wont run

    // printf("%s",ptr);
    char*p = str;
    *p = 'o';
    printf("%s", str);

    
    return 0;
}