#include<stdio.h>

int main(){
    int n,m;
    printf("enter no. of rows:");
    scanf("%d",&n);
    printf("enter no. of columns:");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){ //outer loop--> no. of lines
        for(int i=1;i<=m;i++){ //inner loop-->no. of stars in each line
        printf("*");
        }
        printf("\n");  //har iteration ke bad new line aegi
    }
    return 0;
}