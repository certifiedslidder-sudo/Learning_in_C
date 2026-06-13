
/* line 11, 12 is imp ; has major concept of the question*/
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7] = {2,5,8,65,67,68,90};        ///increasing array
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0; i<=6; i++){
        if(max<arr[i]){
            smax = max;        // smax is now previous max
            max = arr[i];        /// max is now a new max
        }
    //    if(smax < arr[i] && max!= arr[i]){                // false here
    //         smax = arr[i];
    //     }
    }


    printf("%d", smax);
    return 0;
}