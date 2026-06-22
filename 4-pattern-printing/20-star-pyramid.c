/*
              *
             ***
            *****
           *******
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
       
        for(int k=1;k<=2*i-1;k++){ // FOR ch
           
            printf("*");        
    
        }
        printf("\n");
    }
    return 0;
}