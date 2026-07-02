//revesing  some elements of an array
    //THROUGH FUNCTION      
   //reversing part of array
#include<stdio.h>
void reverse(int arr[],int si,int ei){ 
    //starting and ending index
    int i, j , temp;
    for(i=si, j=ei; i<j; i++, j--){
        temp = arr[i];
        arr[i]= arr[j];
        arr [j] = temp;
    }
     return;   
    }

int main(){
    int arr[7] = {1,2,3,4,5,6,7};   
 reverse(arr,1,4);
    //reverse index 1-4
    for(int i = 0; i<=6; i++){
       printf("%d ",arr[i]);     
    }
    return 0;
}