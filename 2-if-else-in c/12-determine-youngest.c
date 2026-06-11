#include<stdio.h>

int main(){
      int ram,shyam,ajay;
    printf("enter the age of ram");
    scanf("%d", &ram);
    printf("enter the age of shyam");
    scanf("%d", &shyam);
    printf("enter the age of ajay");
    scanf("%d", &ajay);
    if(ram<shyam && ram<ajay){
        printf("ram is the youngest of three");
    }
    if(shyam<ram && shyam<ajay){
        printf(" shyam is the youngest of three");
    }
    if(ajay<shyam && ajay<shyam){
        printf(" ajay is the youngest of three");
    }
    return 0;
}