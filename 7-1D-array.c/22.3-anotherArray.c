#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]= {1,2,3,4,4,2,1};
    // WHAT IF LARGEST ELEMENT REPEATS ITSELF??????
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0;i<=6;i++){     //imp dry run
        if( max <arr[i]){
          smax = max;  //smax= previous max
            max = arr[i];  // max = new max
        }     //else if works only when if dont work
        else if(smax<arr[i] && max!=arr[i] ){  //imp line
            smax = arr[i];
        }
    }
    printf("%d\n",max);
    printf("%d",smax);
    return 0;
} 