#include<stdio.h>

int main(){
    int l;
    int b;
    printf("enter the length:");
    scanf("%d",&l);
    printf("enter the breadth:");
    scanf("%d",&b);
    int area = l*b;
    int perimeter= 2*(l+b);
    if (area>perimeter)
    {
        printf("area of the rectangle is greater than its perimeter.");
    }
    if(perimeter>area)
    {
        printf("the perimeter of rectangle is greater than its area.");
    }
    if(area==perimeter)
    {
        printf("the area and perimeter of rectanglke is equal.");
    }
    return 0;
}