/* 
                  ****
                  ***
                  **
                  *
*/
#include<stdio.h>

int main(){
    int n;
    printf("enter no. of rows:");
    scanf("%d",&n);
    int a=n;
    for(int i=1;i<=n;i++){ 
        //for(int j=1;j<=n+1-i;j++){    //if i=1 , j must be 4
    for(int j=1;j<=a;j++){ //j jara h 1 to a.ab a kam kro
            printf("* ");         
        }
        a--;
        printf("\n");
    }
    return 0;
}