/*given array and a number 'x'.Find out if 'x' lies in the array or not,if yes then print the index.*/

#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]= {1,4,3,4,4,6,4};
    int x=3;
    int idx = -1;
    bool flag = false; // false means element is not present
    for(int i=6; i>=0;i--){
        if(arr[i]==x){
           flag =true ;   // true means element is present
           idx= i;
           break; //will end as it finds x for the first time ..
        }
       
    }
    if(flag == false){
        printf("%d is not present in the array",x);
    }
    else{
         printf("%d is  present in the array and its index is %d",x,idx);
    }
    return 0;
}