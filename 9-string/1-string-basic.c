#include<stdio.h>

int main(){
//     int a[4] = {1,2,3,4};                *** CHARACTER ***
//     // printf("%p\n", &a[0]);
//     // printf("%p\n", &a[1]);            , MEMORY DIFFERENCE 4-4 BYTE EACH
//     // printf("%p\n", &a[2]);
//     // printf("%p\n", &a[3]);
//   char arr[4] = {'e','r','q','k'};       *** ARRAY ***
//   printf("%p\n", &arr[0]);
//     printf("%p\n", &arr[1]);
//     printf("%p\n", &arr[2]);    , HERE YOU WILL SE MEMORY DIFFERNCE AS 1-1 BYTE  EACH
//     printf("%p\n", &arr[3]);
//    // printf("%c", arr[4]);


// char ch = '0';
// int x = (int )ch;                               //type casting
// printf("%d", x);




/* ASCII VALUES 
'A'      --->> 65
'a'      --->> 97
'0'  this is char 0     --->> 48
'9'      --->> 57
*/
char arr[]= {'h','e','l','l','o','\0'};    //here we need to give null character

// char arr[] = {" HELLO WORLD "}     ----->       no need to give null character automatically presen in this type of initialization...
 char ch = '\0';              //'\0' = null character & has ascii value 0
// int x = 0;                      // \0 = don't print
// char a = (char)x ;                  //now a stores \0
// printf("%c", a);
int i = 0;
while (arr[i] != '\0'){
    printf("%c ", arr[i]);
    i++;
}
    return 0;
}