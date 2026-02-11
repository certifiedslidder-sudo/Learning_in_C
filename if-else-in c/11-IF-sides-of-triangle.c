#include<stdio.h>
  /*logic=
  x+y>z
  y+z>x
  x+z>y
  */
int main(){
          int x,y,z;
    printf("enter value of x");
    scanf("%d", &x);
    printf("enter value of y");
    scanf("%d", &y);
    printf("enter value of z");
    scanf("%d", &z);
    if( x+y>z && y+z>x && x+z>y){
        printf("yes theses can be the sides of a triangle");
    }
    else{
        printf("no,these can be the sides of a triangle");
    }
     
    return 0;
}