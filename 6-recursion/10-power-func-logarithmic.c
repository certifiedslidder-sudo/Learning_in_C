#include<stdio.h>
int powerLOG(int a, int b){
    if (b==1) return a;                          
    if(b%2 !=0)                                   //for odd power
    {
     return powerLOG(a,b/2)*powerLOG(a,b/2)*a;               ///  VERY VERY VERY IMPORTANT LINE
    }
    int c = powerLOG(a,b/2);                      //for even  power
    int recANS = c * c;   
    return recANS;
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