//give an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.                     example. arr=[1,2,3,4,5,6,7,8]         result : arr=[11,4,13,8,15,12,17,16]

#include<stdio.h>
int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    for(int i=0;i<=7;i++){
        if(i%2==0){
            arr[i]=arr[i] + 10;
        }
        else{
            arr[i]= arr[i]*2;
        }
    }
    for(int i=0;i<=7;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
