#include<stdio.h>
#include<string.h>
int main(){
   // char str[] = "sneha rawat is a b tech student";        //size=7
   
//char arr[]={'h','e','l','l','o'}; /can initialize in same line without giving size,,      
                                    //  // size=6 , gives garbage too
                                    
                                    
    // char str[];    // WRONG  cant declare without giving size
    // int i =0;
    // while(i<5){
    //     printf("%c  ", *(i+arr));
    //     i++;
//puts(str);
//puts("hello guyzzzz");

char str[4];     // if input chracter>4, then a problem appears
//scanf("%s", str);  // only the first word will be considered, no use of '&'
//gets(str);       // entire sentence can be input

//or can use scanf("%^[\n]s",str);   /// // entire sentence can be input
scanf("%[^\n]s", str);        //. // entire sentence can be input
printf("your input was: %s",str);                
    return 0;

}
   
    
