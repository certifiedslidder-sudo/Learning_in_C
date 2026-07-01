#include<stdio.h>

int main(){
    int sub[50],i;
    for(i=0;i<=48;i++);
    //here semicolon changed the whole output🪷
    {
        sub[i]=i;
        printf("\n%d",sub[i]);
    }  // 49             because condition failed at i==49 thus i=49 prints
    return 0;
}