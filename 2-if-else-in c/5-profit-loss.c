/*
if cp and sp of an item is input through the keyboard,write a program to determine whether the seller has made profit or incurred loss.also determine how much profit he made or loss he incurred.*/

#include<stdio.h>

int main(){
    int cp,sp,profit_made;
    printf("enter the  cost price:");
    scanf("%d", &cp);
    printf("enter the selling price:");
    scanf("%d", &sp);
    scanf("%d",&profit_made);
    if (sp>cp)
    {
        printf("the seller had profit");
        printf("profit made by the seller:", profit_made);
    }    
    if (cp>sp){
    printf("the seller faced loss");    
    }
    if(cp==sp){
        printf("the seller had no profit no loss.");
    }
    
    return 0;
}