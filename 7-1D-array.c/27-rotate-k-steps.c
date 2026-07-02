// rotate a given array 'a' by k steps, where k is non- negative.
// NOTE = k can be greater than n as well where n is the size of array'a'.   IF -->>    k>n, k=k%n

//steps  
//       1- k=k%n     let n=7
//       2- reverse(arr,0,n-1) --->  0,6
//       3- reverse(arr,0,k-1) --->  0,2 
//       4- reverse(arr, k, n-1) ---> 3,6

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
        int arr[7] ={1,2,3,4,5,6,7};
        int n = 7;
        int k = 30;
        k=k%n;
        reverse(arr,0,n-1);
        reverse(arr,0,k-1);
        reverse(arr,k,n-1);
        for(int i =0;i<=n-1;i++){
            printf("%d ", arr[i]);
        }
    
} // if k>n; k=k-n,if still k>n then again k=k-n. better option,    k=k%n =C0RRECT WAy  