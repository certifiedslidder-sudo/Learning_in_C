#include<stdio.h>
int powerLOG(int a, int b){     // imp dry run
    if (b==1) return a;                          
   // if (b==0) return 1;                          
    int x = powerLOG(a,b/2);
    if(b%2 ==0)
        return x*x;
    else    
        return x*x*a;    
}

int main(){
       int a ;
       printf("enter base: ");
       scanf("%d",&a);
       int b ;
       printf("enter power: ");
       scanf("%d",&b);
       int p = powerLOG(a,b);
       printf("%d  raised to the power %d is %d",a,b,p);      
      return 0;

}