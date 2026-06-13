#include<stdio.h>

int main(){
    int cp,sp;
    printf("enter the  cost price:");
    scanf("%d", &cp);
    printf("enter the selling price:");
    scanf("%d", &sp);
    if (sp>cp)
    {
        printf("the seller had profit");
    }    
    else if (cp>sp){
    printf("the seller faced loss");    
    }
    else{
        printf("the seller had no profit no loss.");
    }
    
    return 0;
}