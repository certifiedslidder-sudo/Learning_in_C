/*WAP TO PRINT ALL THE ASCII VALUES AND THEIR EQUIVALENT VHARACTERS OG 26 ALPHABETS USING A WHILE LOOP(CAPITAL CASE).*/

#include<stdio.h>

int main(){
    for(int i=65; i<=90;i++)
    {
        char ch =(char)i;
        printf("%c -->", ch);
         printf("%d\n ",i);
    }
    return 0;
}