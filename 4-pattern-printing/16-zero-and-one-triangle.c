/*
             1
             0 1
             1 0 1
             0 1 0 1
*/

//IMPORTANT DRY RUN'''

#include<stdio.h>
int main(){
    int n;
    printf("enter no. of rows:");
    scanf("%d",&n);
    int a;
    for(int i=1;i<=n;i++){ 
        if(i%2!=0)   a=1;
        else a=0;
        for(int j=1;j<=i;j++){   
            printf("%d" ,a);  
            if(a==0) a=1;    //imp line
            else a=0;         // imp line
        }
        printf("\n");
    }
    return 0;
}