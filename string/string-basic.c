#include<stdio.h>

int main(){
//     int a[4] = {1,2,3,4};
//     // printf("%p\n", &a[0]);
//     // printf("%p\n", &a[1]);
//     // printf("%p\n", &a[2]);
//     // printf("%p\n", &a[3]);
//   char arr[4] = {'e','r','q','k'};
//   printf("%p\n", &arr[0]);
//     printf("%p\n", &arr[1]);
//     printf("%p\n", &arr[2]);
//     printf("%p\n", &arr[3]);


//    // printf("%c", arr[4]);

// char ch = '0';
// int x = (int )ch;                               //type casting
// printf("%d", ch);

char arr[]= {'h','e','l','l','o','\0'};
// char ch = '\0';              //'\0' = null character & has ascii value 0
// int x = 0;                      // \0 = don't print
// char a = (char)x ;                  //now a stores \0
// printf("%c", a);
int i = 0;
while (arr[i] != '\0'){
    printf("%c   ", arr[i]);
    i++;
}
    return 0;
}