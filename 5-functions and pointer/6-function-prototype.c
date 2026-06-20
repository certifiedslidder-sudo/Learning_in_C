#include<stdio.h>

int main(){
    void fun();  //'''FUNCTION PROTOTYPE'''
    fun();
    return 0;
}

void fun(){
    printf("hello"); //can call the function anywhere after giving function prototype.

}