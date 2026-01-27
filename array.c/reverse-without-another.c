/* write a program to reverse the array without using another array*/

               /*            imp question     */

               ///hint = swap two numbers



               ///sare steps imortant hai ///

#include<stdio.h>
void reverse(int arr[]){
    int i =0;                                                     //for m is step ki zarurat ni h
    int j = 6;         // n-1; 7-1=6.....                        //for m is step ki zarurat ni h
    while(i<=j){                                                //for(int i, int j; i++, j--){ bas whi swap ka code dal do without i++ and j--}
        ///swap arr[i] and arr[j]
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
    reverse(arr);
    for(int i = 0; i<=6; i++){
       printf("%d ", arr[i]);     
    }
    return 0;
}


                      /* for loop se khud krke dekh*/