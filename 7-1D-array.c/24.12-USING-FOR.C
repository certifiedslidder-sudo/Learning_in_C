
/* write a program to reverse the array without using another array*/

#include<stdio.h>

void reverse(int arr[], int n){
    for(int i = 0, j = n-1; i <= j; i++, j--){
        // swap arr[i] and arr[j]
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int n = 7;
    
    reverse(arr, n);
    
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}