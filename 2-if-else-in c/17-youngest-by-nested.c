#include<stdio.h>

int main(){
    int ram , shyam, meet;
    printf("enter the age of ram: ");
    scanf("%d" , &ram);
    printf("enter the age of shyam: ");
    scanf("%d" , &shyam);
    printf("enter the age of meet:" );
    scanf("%d" , &meet);
    if (ram <shyam){
        if(ram < meet)
            printf("ram is youngest" );
        
        else
            printf("meet is the youngest");
        
    }
    else{
       if(shyam < meet)
        printf("shyam is the youngest");
       
       else
        printf("meet is the youngest");
       
    }   
    return 0;
}
