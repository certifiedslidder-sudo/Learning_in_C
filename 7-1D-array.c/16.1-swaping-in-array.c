#include<stdio.h>
void fun(int x[]){       //whole address(array) is passed  , without using pointers.
    int temp = x[0];
    x[0] = x[1];
    x[1] = temp;
    return;
}
int main(){
    int arr[2] = {2,9};
    printf("%d %d\n", arr[0],arr[1]);
    fun(arr);
    printf("%d %d\n", arr[0],arr[1]);
    return 0;
}


//     MCQ - when you pass an array as an argument to a function, what actually gets passed?

/*
1. address of the array
2. values of the elements of the array
3. address of the first element of the array
4. number of elements of the array
*/

// ANS- 3{address of first element = address of whole array.}