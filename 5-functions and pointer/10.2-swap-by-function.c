#include<stdio.h>
void swap(int a, int b){
    int temp = a;
    a=b;
    b=temp;
    return;
}

int main(){
     int a;
    printf("enter a:");
    scanf("%d", &a);
     int b;
    printf("enter b:");
    scanf("%d", &b);

    swap(a,b); // we passes value(a and b ) here , not the container😒 we aren't passing a and b
    // here  a and b = FORMAL PARAMETERS 
    // value of a and b = ACTUAL PARAMETERS

    printf("the value of a is %d\n",a);
    printf("the value of b is %d\n",b);
    return 0;
}