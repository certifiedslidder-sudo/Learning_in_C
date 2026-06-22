/*
            A
          A B
        A B C
      A B C D
*/
#include<stdio.h>
int main(){
    int n;
    printf("enter no. of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ //FOR SPACES
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        int a=1;
        for(int k=1;k<=i;k++){ // FOR ch
            int d = a+64;  
            char ch = (char)d; 
            printf("%c",ch);        
            a++;
        }
        printf("\n");
    }
    return 0;
}