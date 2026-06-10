#include<stdio.h>
int main(){
    float r;
    printf("enter radius:");
    scanf("%f", &r);  //taking input from user
    float pi = 3.1415;
    float area = pi*r*r;
    printf("the area of circle is:%f",area);  //giving output
    return 0;
}