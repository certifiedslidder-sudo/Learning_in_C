#include<stdio.h>

int main(){
    char arr[20] ="SnehaRawat";
    arr[1] = 98;
    int i =0;
    while(arr[i]!= '\0'){
        printf("%c", arr[i]);
       // printf("%c", i[arr]);  //works same as arr[i]
       // printf("%c", *(arr+i));
        //printf("%c", *(i+arr));
        i++;
    }
    return 0;
}