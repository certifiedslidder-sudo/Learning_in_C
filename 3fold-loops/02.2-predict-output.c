#include<stdio.h>

int main(){
    int i = 1;
    while(i<= 10); //; makes loop body empty
    {
        printf("\n%d ", i);
        i++;
    }
    return 0;
}