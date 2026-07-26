
#include<stdio.h>
   void zigzag(int n){
    if (n == 0) return;
    printf("%d ",n);
    zigzag(n-1);
    printf("%d ",n);
    zigzag(n-1);
    printf("%d       ",n);

   }
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    zigzag(n);
    return 0;
}
/*
                PRINT   ZIG - ZAG
    Input     Output
      1       111
      2       211121112
      3       32111211123111211123
      4       432111211123211121112343211121112321112111234 


ex- for 2 , 
Pre 2 Pre 1 In 1 Post 1 In2 Pre 1 In 1 Post 1 Post 2
*/