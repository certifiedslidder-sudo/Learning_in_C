#include<stdio.h>

int main(){
    struct pokemon{
        int hp;
        int attack;
        int speed;
    };  // you cannot add a new data type in an incomplete data type
    struct legendary pokemon{
        int  special attack;
        struct pokemon x;
    } 
    return 0;
}