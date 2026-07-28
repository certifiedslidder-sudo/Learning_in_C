#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
//    scanf("%s", str);                                    only the first word of your input will be considered, stops reading after space
gets(str);                                           // ENTIRE SENTENCE CAN BE TAKEN AS INPUT



/*    ANOTHER WAY    
scanf("%[^\n]s",str);
*/


    printf(" your input was %s", str);   
    return 0;
}