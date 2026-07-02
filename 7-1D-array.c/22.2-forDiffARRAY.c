#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5]= {5,4,3,2,1};
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0;i<=4;i++){     //imp dry run
        if( max <arr[i]){
          smax = max;  //smax= previous max
            max = arr[i];  // max = new max
        }
        else if(smax<arr[i] ){  //imp line
            smax = arr[i];
        }
    }
    printf("%d",smax);
    return 0;
} 