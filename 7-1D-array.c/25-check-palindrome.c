// if an array arr contains n elements, then check if the given array is palindrome or not//

#include<stdio.h>
int isPalindrome(int arr[], int n){
    int i = 0;
    int j = n - 1;

    while(i < j){
        if(arr[i] != arr[j]){
            return 0;   // Not palindrome
        }
        i++;
        j--;
    }
    return 1;   // Palindrome
}

int main(){
    int arr[6] = {1,2,3,9,2,1};

    if(isPalindrome(arr, 6)){
        printf("It is a palindrome");
    } else {
        printf("It is not a palindrome");
    }

    return 0;
}