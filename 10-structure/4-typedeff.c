#include<stdio.h>
typedef float realNumber;    // typedef oldName realName
typedef int realOnes;
int main(){
    realOnes x = 123;   // typedef replaced the data type name int with realOnes "only name changed , the function of the data- type remained same." 
    realNumber y  = 3.1415;      // renamed float to realNumber with the help of typedef
    printf("%f", y);
    return 0;
}