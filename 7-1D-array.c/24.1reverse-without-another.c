  /*        IMPORTANT QUESTION     */

/* write a program to reverse the array without using another array*/
//hint = swap two numbers
//sare steps imortant hai 

#include<stdio.h>
void reverse(int arr[], int n){
    int i=0;               
    int j = n-1; 
   //int j=6    // passed hardcore will crash for array other than size 7

    //Kabhi bhi array ka size function ke andar hardcode mat karo.Hamesha size ko PARAMETER ke through pass karo.
    while(i<=j){      
        // swap arr[i] and arr[j]
        int temp =  arr[i];
        arr[i] = arr[j];
        arr[j] =  temp;
        i++;
        j--;
    }
    return;
}
int main(){
    int arr[7] = {1,2,3,4,5,6,7};   
    reverse(arr,7);
    for(int i = 0; i<=6; i++){
       printf("%d ", arr[i]);     
    }
    return 0;
}      
//         /*IMPORTANT NOTE*/
//   i <= j	✅ Middle element swaps with itself (harmless)	✅ All pairs swapped
// i < j	✅ Skips middle (already in place)	✅ All pairs swapped