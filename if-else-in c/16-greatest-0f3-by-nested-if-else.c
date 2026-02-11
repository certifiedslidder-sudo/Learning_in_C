#include<stdio.h>
int main(){
        int x,y,z;
    printf("enter value of x");
    scanf("%d", &x);
    printf("enter value of y");
    scanf("%d", &y);
    printf("enter value of z");
    scanf("%d", &z);
    if(x>y){  //b is out of race
        if(x>z)
            printf(" %d is the greatest",x);
        
        else{   //x<z
            printf("%d is greatest ",z);
        }

    }   
        else{  // y>x     -> x ab sbse bada toh nhi h   
            if(y>z)                         ///y>x
              printf("%d is the greatest", y);
            else   //z>y
                print("% is greatest",z)  
        }

    return 0;
}