#include<stdio.h>
int main(){
         int n;
    printf("enter n:");
    scanf("%d", &n);
    for(int i=0;i<=n;i++){
        int first =1; //1 will be the first element in all row.
      printf("%d ", first);
         int a=n-i;
        for(int k=0;k<=a;k++){
            printf(" ");

        }
        for( int j=0;j<=i;j++){
          printf("%d ", first);
            first  =  first*(i-j)/(j+1); //ic(j+1)

        }
        printf("\n");
    }
    
    return 0;
}