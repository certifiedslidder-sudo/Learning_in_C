#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7] = {2,5,8,65,67,68,90};
    int max = INT_MIN;

    for(int i =0; i<=6;i++){ // index will go one le
        if(max< arr[i]){
            max = arr[i];
        }
    }
    printf("%d", max);
    return 0;
}