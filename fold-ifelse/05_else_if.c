#include<stdio.h>

int main(){
    int age = 4;

    if (age>18){
        printf("you are eligible to vote\n");
        printf("you can drive\n");
    }
    //agr if ki condition true ho gyi toh age wali condition apply ni hogi
    //aur if ki condition print ho jaegi(all else if and else will be ignored)
    else{
        printf("you cannot vote\n");
        printf("you cannot drive\n");
    }
    printf("thank you neeraj\n");
    return 0;
}


//if , else if, else LADDER
//there can be any number of else if