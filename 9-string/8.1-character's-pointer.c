#include<stdio.h>
#include<string.h>
int main(){
    char* ptr = "Physic Wallah";
/* characters pointer can also be used to store the address of a string.

NOTE -->   such direct initialization using pointers results in a read only memory allocation of character arrays and hence , causes UNDEFINED BEHAVIOUR    when we try to change the inndividual character.*/  
    //printf("%s", ptr);  
    ptr[0] = 'm';      // error!
    printf("%s", ptr);  


    /*
                  WHERE AS
      
      char str[]= "college wallah";
      str[0] = 'A';
      printf("%s", str);                 prints    Aollege wallah        
    */
    return 0;
}