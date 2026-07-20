/*
                                               nth stair
            allowed :   single step , double step
            to find :   no. of ways so that the person reaches nth stair
*/

#include<stdio.h>
int stair(int n){
    if(n==1 || n==2 ) return n;
    int Totalways = stair(n-1) + stair(n-2) ;  // condition for single and double step
    return Totalways;
}
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int ways = stair(n);
    printf("%d", ways);
    return 0;
}