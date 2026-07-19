#include<stdio.h>
   void decINC(int n){
    if(n==0) return;    
    printf("%d\n",n);
    decINC(n-1);    
    printf("%d\n",n);   
    return;
   }
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    decINC(n);
    return 0;
}