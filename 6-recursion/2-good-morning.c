#include<stdio.h>
   void greeting(int n){
    if(n==0) return;    //base case
    printf("good morning\n");
    greeting(n-1);   // recursive case
    return;
   }
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    greeting(n);
    return 0;
}