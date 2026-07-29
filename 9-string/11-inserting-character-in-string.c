#include<stdio.h>
#include<stdio.h>
int main(){
   char str[20] = "college";
   printf("%s\n",str);
         //2nd index pe 'k'
    for(int i=6;i>=2;i--){
        str[i+1] = str[i];    // inserting / pushing but not replacing

    }
    str[2] = 'k';
    printf("%s",str);
    return 0;
}