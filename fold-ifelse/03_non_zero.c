#include<stdio.h>

int main(){
    if(1){
        printf("this if is executed\n");
    }
    if(234){
        printf("this if is also executed\n");
    }
    if(2.45){
        printf("this if is also executed\n");
    
    }
    if('c'){
        printf("this if is also executed\n");
    }
    if(0){
        printf("i am zero, i am not executed\n");
    }
    return 0;
}