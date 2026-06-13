#include<stdio.h>
void fun( int x[]){  
    int temp = x[0];
    x[0] = x[1];
    x[1] = temp;                  //paasing array or integer or float or char
return;
      // jb hum array ko function mai dalte h toh uska bas value nhi pura address bhi jata h
}
int main(){
   int  arr[2]= {1,5};
    printf("%d %d\n",arr[0], arr[1]);
    fun(arr);                  //   passing value  -- only name is written not the data type
    printf("%d %d\n", arr[0], arr[1]);
    return 0;
}