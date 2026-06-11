//display gp -100,50,25....,upto n terms

#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d", &n);
   float a = 100;
    for( int i=1 ;i <=n ; i++){
        printf("%f\n",a );
        a=0.5*a;
    }
    
    return 0;
}