/*given an array of marks of 10 students,if the mark of any student is less than 35 print its index number(roll number)*/

// BY USER INPUT
#include<stdio.h>
int main(){

     int arr[10];
    for(int i=0; i<9; i++)
    {
        printf("Enter a element number %d\n", i);
    scanf("%d", &arr[i]);
  
    }
     for(int i=0; i<10;i++){
        if(arr[i]<35){
            printf("%d",i);
        }
     }
}