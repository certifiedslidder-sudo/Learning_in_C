#include<stdio.h>
#include<string.h>

int main(){

    char s1[] = "physics wallah";
    // char*s2 = s1;       // s2 is a shallow copy
    // s1[0] ='M';
    // printf("%s", s2);


                  /*DEEP COPY*/
    char s2[] = "physics wallah"; 
    //s2[0] = 'm';
    printf("%p\n",s1);
    printf("%p ", s2);
    
    return 0;
}