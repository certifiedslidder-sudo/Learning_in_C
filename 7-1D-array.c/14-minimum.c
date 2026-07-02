//FIND THE MINIMUM VALUE OUT OF ALL THE ELEMENTS IN THE ARRAY.
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7] = {2,5,8,65,67,68,90};
    int min = INT_MAX;
    for(int i =0; i<=6;i++){
        if(min> arr[i]){
            min = arr[i];
        }
    }
    printf("%d", min);
    return 0;
}