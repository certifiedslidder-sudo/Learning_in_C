#include<stdio.h>

int main(){
    int n = 45;
    int m = 32.23;
// m ko integer bana rhi hu 
     n = (int)m; 
     printf("%d\n",n);   //convert the data type to int      
    return 0;
}