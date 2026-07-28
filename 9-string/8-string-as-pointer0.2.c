#include<stdio.h>    //dry run with *ptr
#include<string.h>
int main(){
    char str[]= "college wallah";
   char* ptr = str;     //ptr now points toward  str[0]
   int i =0;
   /*while(str[i]!= '\0'){
    printf("%c", str[i]);
    i++;
   }*/
  while(*ptr != '\0'){     // ptr - address    , *ptr- fetch value/character.  
      printf("%c", *ptr);   //*ptr --> jis address ko point kr rha h uss ke value ko utha kr aao.
    ptr++;       
    i++;
  }
//  printf("%p", ptr);
//    printf("%p\n",&str[0]);  
//    printf("%p\n",str);   // no need to give & for whole string
 return 0;
}