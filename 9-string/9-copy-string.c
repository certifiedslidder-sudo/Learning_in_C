#include<stdio.h>
#include<string.h>

int main(){

    char s1[] = "physics wallah";
    // char*s2 = s1;       // no new string is formed here      , s2 is a                   shallow copy
    // s1[0] ='M';
    // printf("%s", s2);          //Mhysics wallah


                  /*DEEP COPY*/
    char s2[] = "physics wallah";      // this is a diff string fromed.....
    s2[0] = 'm';
    printf("%s\n",s1);           //physics wallah
    printf("%s\n ", s2);         //mhysics wallah
    
    return 0;
}