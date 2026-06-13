// DISPLAY THIS AP - 100,97,94,..... UPTO ALL TERMS WHICH ARE POSITIVE.
#include<stdio.h>
int main(){
    // int n;
    // printf("enter a number:");
    // scanf("%d", &n);
    //100,97,93.....
    int a = 100;
    for( int i=1 ;a>0; i++){  /*IMP LINE,MULTIPLE-CONDITION*/
        printf("%d\n",a);
        a=a-3;
    }
    
    return 0;
}