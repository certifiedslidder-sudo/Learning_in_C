/*find the maximumu value out of all the elements ofbb an array*/

#include<stdio.h>

int main(){
    int arr[7] = {2,5,8,65,67,68,90};
    int max = arr[0]; // sabse chota number lo

    for(int i =1; i<=6;i++){ // index will go one le
        if(max< arr[i]){
            max = arr[i];
        }
    }
    printf("%d", max);
    return 0;
}