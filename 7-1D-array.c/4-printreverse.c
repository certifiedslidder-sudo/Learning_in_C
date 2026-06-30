//take input from user and print reverse of that array.

#include<stdio.h>
int main(){
    int arr[5];
    for(int i =0; i<=4; i++)
    {
        printf("Enter a element number %d\n", i+1);
    scanf("%d", &arr[i]);
    }
for(int i =4; i>=0;i--){
printf("%d\n", arr[i]);
}
    return 0;
}